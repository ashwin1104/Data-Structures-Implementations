#include <iterator>
#include <cmath>

#include <list>
#include <queue>
#include <stack>
#include <vector>

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"
#include "DFS.h"

/**
 * Initializes a depth-first ImageTraversal on a given `png` image,
 * starting at `start`, and with a given `tolerance`.
 *
 * @param png The image this DFS is going to traverse
 * @param start The start point of this DFS
 * @param tolerance If the current point is too different (difference larger than tolerance) with the start point,
 * it will not be included in this DFS
 */
DFS::DFS(const PNG &png, const Point &start, double tolerance)
{
  this_png = png;
  this_start = start;
  this_stack.push(this_start);
  this_tolerance = tolerance;
}

/**
 * Returns an iterator for the traversal starting at the first point.
 */
ImageTraversal::Iterator DFS::begin()
{
  /** @todo [Part 1] */
  return ImageTraversal::Iterator(this_png, this_start, this_tolerance, this);
}

/**
 * Returns an iterator for the traversal one past the end of the traversal.
 */
ImageTraversal::Iterator DFS::end()
{
  /** @todo [Part 1] */
  return ImageTraversal::Iterator();
}

/**
 * Adds a Point for the traversal to visit at some point in the future.
 */
void DFS::add(const Point &point)
{
  this_stack.push(point);
}

/**
 * Removes and returns the current Point in the traversal.
 */
Point DFS::pop()
{
  Point ret = this_stack.top();
  this_stack.pop();
  return ret;
}

/**
 * Returns the current Point in the traversal.
 */
Point DFS::peek() const
{
  return this_stack.top();
}

/**
 * Returns true if the traversal is empty.
 */
bool DFS::empty() const
{
  return this_stack.empty();
}
