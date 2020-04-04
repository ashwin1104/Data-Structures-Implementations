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
  if (first[curDim] < second[curDim])
  {
    return true;
  }
  else if (first[curDim] == second[curDim] && first < second)
  {
    return true;
  }
  return false;
}

template <int Dim>
bool KDTree<Dim>::shouldReplace(const Point<Dim> &target,
                                const Point<Dim> &currentBest,
                                const Point<Dim> &potential) const
{
  double dist_curr = 0;
  double dist_pot = 0;
  for (int curDim = 0; curDim < Dim; curDim++)
  {
    double temp = target[curDim] - currentBest[curDim];
    temp *= temp;
    dist_curr += temp;
    temp = target[curDim] - potential[curDim];
    temp *= temp;
    dist_pot += temp;
  }
  if (dist_pot < dist_curr)
  {
    return true;
  }
  else if (dist_pot == dist_curr && potential < currentBest)
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
  for (const Point<Dim> &i : newPoints)
  {
    points.push_back(i);
  }
  root = buildTree(0, size - 1, 0);
}

template <int Dim>
typename KDTree<Dim>::KDTreeNode *KDTree<Dim>::buildTree(int start_index, int end_index, int d)
{
  int median = (start_index + end_index) / 2;
  if (start_index > end_index)
  {
    return NULL;
  }
  else if (start_index == end_index)
    return new KDTreeNode(points[start_index]);
  splitByMedian(start_index, end_index, d, median);
  KDTreeNode *currentRoot = new KDTreeNode(points[median]);
  currentRoot->left = buildTree(start_index, median - 1, (d + 1) % Dim);
  currentRoot->right = buildTree(median + 1, end_index, (d + 1) % Dim);
  return currentRoot;
}

template <int Dim>
void KDTree<Dim>::splitByMedian(int start_index, int end_index, int d, int pivot_index)
{
  // int pivot_value = points[pivot_index][d];
  // swap(points[pivot_index], points[size - 1]);
  // int store_index = 0;
  // for (size_t i = 0; i < size; i++)
  // {
  //   if (points[i][d] < pivot_value || ((points[i][d] == pivot_value) && (points[i] < points[size - 1])))
  //   {
  //     swap(points[store_index], points[i]);
  //     store_index++;
  //   }
  // }
  // swap(points[size - 1], points[store_index]);
  // return store_index;
  while (start_index != end_index)
  {
    Point<Dim> pivotPoint = points[pivot_index];
    points[pivot_index] = points[end_index];
    points[end_index] = pivotPoint;
    int storeIndex = start_index;
    for (int i = start_index; i < end_index; i++)
    {
      if (smallerDimVal(points[i], pivotPoint, d) || points[i] == pivotPoint)
      {
        Point<Dim> temp = points[storeIndex];
        points[storeIndex] = points[i];
        points[i] = temp;
        storeIndex++;
      }
    }
    Point<Dim> temp = points[storeIndex];
    points[storeIndex] = points[end_index];
    points[end_index] = temp;
    if (storeIndex == pivot_index)
      return;
    else if (pivot_index < storeIndex)
      end_index = storeIndex - 1;
    else
      start_index = storeIndex + 1;
  }
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
  {
    if (!subRoot->left && !subRoot->right)
    {
      return subRoot->point;
    }
    Point<Dim> closest_point = subRoot->point;
    Point<Dim> competitor = closest_point;
    bool direction = smallerDimVal(query, closest_point, d);
    if (direction && subRoot->left != NULL)
    {
      competitor = findNearestNeighbor(query, subRoot->left, (d + 1) % Dim);
    }
    else if (!direction && subRoot->right != NULL)
    {
      competitor = findNearestNeighbor(query, subRoot->right, (d + 1) % Dim);
    }

    if (shouldReplace(query, closest_point, competitor))
      closest_point = competitor;

    int bestDistance = 0;
    for (int i = 0; i < Dim; i++)
    {
      bestDistance += (closest_point[i] - query[i]) * (closest_point[i] - query[i]);
    }
    int dimDistance = (query[d] - subRoot->point[d]) * (query[d] - subRoot->point[d]);
    if (dimDistance <= bestDistance)
    {
      if (!direction && subRoot->left != NULL)
      {
        competitor = findNearestNeighbor(query, subRoot->left, (d + 1) % Dim);
        if (shouldReplace(query, closest_point, competitor))
          closest_point = competitor;
      }
      else if (direction && subRoot->right != NULL)
      {
        competitor = findNearestNeighbor(query, subRoot->right, (d + 1) % Dim);
        if (shouldReplace(query, closest_point, competitor))
          closest_point = competitor;
      }
    }
    return closest_point;
  }
}