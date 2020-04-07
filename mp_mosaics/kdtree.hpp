/**
 * @file kdtree.cpp
 * Implementation of KDTree class.
 */

#include <utility>
#include <algorithm>

using namespace std;

template <int Dim>
bool KDTree<Dim>::smallerDimVal(const Point<Dim> &first,
                                const Point<Dim> &second, int curDim) const
{
  if (first[curDim] < second[curDim] || (first[curDim] == second[curDim] && first < second))
  {
    return true;
  }
  return false;
}
template <int Dim>
double KDTree<Dim>::dist(const Point<Dim> &p1,
                         const Point<Dim> &p2) const
{
  double distsqr = 0;
  for (int curDim = 0; curDim < Dim; curDim++)
  {
    double temp = p1[curDim] - p2[curDim];
    temp *= temp;
    distsqr += temp;
  }
  return distsqr;
}
template <int Dim>
bool KDTree<Dim>::shouldReplace(const Point<Dim> &target,
                                const Point<Dim> &currentBest,
                                const Point<Dim> &potential) const
{
  if (dist(target, potential) < dist(target, currentBest) || (dist(target, potential) == dist(target, currentBest) && potential < currentBest))
  {
    return true;
  }
  return false;
}

template <int Dim>
KDTree<Dim>::KDTree(const vector<Point<Dim>> &newPoints)
{
  size = newPoints.size();
  if (size == 0)
  {
    root = NULL;
    return;
  }
  for (auto i : newPoints)
  {
    points.push_back(i);
  }
  root = buildTree(0, size - 1, 0);
}

template <int Dim>
typename KDTree<Dim>::KDTreeNode *KDTree<Dim>::buildTree(int start_index, int end_index, int d)
{
  int median_index = (start_index + end_index) / 2;
  if (start_index > end_index)
  {
    return NULL;
  }
  if (start_index == end_index)
  {
    return new KDTreeNode(points[start_index]);
  }
  int si = start_index;
  int ei = end_index;
  while (si != ei)
  {
    int store_index = sortByMedian(si, ei, d, median_index);
    if (store_index == median_index)
    {
      break;
    }
    ei = (median_index < store_index) ? (store_index - 1) : ei;
    si = (median_index > store_index) ? (store_index + 1) : si;
  }
  KDTreeNode *subRoot = new KDTreeNode(points[median_index]);
  subRoot->left = buildTree(start_index, median_index - 1, (d + 1) % Dim);
  subRoot->right = buildTree(median_index + 1, end_index, (d + 1) % Dim);

  return subRoot;
}

template <int Dim>
int KDTree<Dim>::sortByMedian(int start_index, int end_index, int d, int pivot_index)
{

  swap(points[pivot_index], points[end_index]);
  auto pivot = points[end_index];
  int store_index = start_index;
  for (int i = start_index; i < end_index; i++)
  {
    if (smallerDimVal(points[i], pivot, d))
    {
      swap(points[i], points[store_index]);
      store_index++;
    }
  }
  swap(points[store_index], points[end_index]);
  return store_index;
}

template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim> &other)
{
  this = new KDTree(other.points);
}

template <int Dim>
const KDTree<Dim> &KDTree<Dim>::operator=(const KDTree<Dim> &rhs)
{
  if (*this != rhs)
  {
    for (unsigned i = 0; i < size; i++)
    {
      points.pop_back();
    }
    destroy(root);
    size = 0;
    this = new KDTree(rhs.points);
  }
  return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree()
{
  for (unsigned i = 0; i < size; i++)
  {
    points.pop_back();
  }
  destroy(root);
  size = 0;
}

template <int Dim>
void KDTree<Dim>::destroy(typename KDTree<Dim>::KDTreeNode *subRoot)
{
  if (!subRoot)
  {
    return;
  }
  destroy(subRoot->left);
  destroy(subRoot->right);
  delete subRoot;
  subRoot = NULL;
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim> &query) const
{
  return findNearestNeighbor(query, root, 0);
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim> &query, typename KDTree<Dim>::KDTreeNode *subRoot, int d) const
{
  if (!subRoot->left && !subRoot->right)
  {
    return subRoot->point;
  }

  Point<Dim> nearest_neighbor = subRoot->point;
  Point<Dim> potential_nearest = nearest_neighbor;
  bool go_left = smallerDimVal(query, subRoot->point, d);
  potential_nearest = getPotentialNearest(go_left, query, subRoot, potential_nearest, d);
  nearest_neighbor = shouldReplace(query, nearest_neighbor, potential_nearest) ? potential_nearest : nearest_neighbor;

  int smallest_radius = dist(query, nearest_neighbor);
  int current_dim_dist = (query[d] - subRoot->point[d]);
  current_dim_dist *= current_dim_dist;

  if (current_dim_dist > smallest_radius)
  {
    return nearest_neighbor;
  }

  go_left = !go_left;
  potential_nearest = getPotentialNearest(go_left, query, subRoot, potential_nearest, d);
  nearest_neighbor = shouldReplace(query, nearest_neighbor, potential_nearest) ? potential_nearest : nearest_neighbor;
  return nearest_neighbor;
}

template <int Dim>
Point<Dim> KDTree<Dim>::getPotentialNearest(bool go_left, const Point<Dim> &query, typename KDTree<Dim>::KDTreeNode *subRoot, Point<Dim> potential_nearest, int d) const
{
  if (go_left && subRoot->left)
  {
    return findNearestNeighbor(query, subRoot->left, (d + 1) % Dim);
  }
  else if (!go_left && subRoot->right)
  {
    return findNearestNeighbor(query, subRoot->right, (d + 1) % Dim);
  }
  return potential_nearest;
}