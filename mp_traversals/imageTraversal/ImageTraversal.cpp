#include <cmath>
#include <iterator>
#include <iostream>

#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

#include <cmath>
#include <iterator>
#include <iostream>

#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

/**
 * Calculates a metric for the difference between two pixels, used to
 * calculate if a pixel is within a tolerance.
 *
 * @param p1 First pixel
 * @param p2 Second pixel
 * @return the difference between two HSLAPixels
 */
double ImageTraversal::calculateDelta(const HSLAPixel &p1, const HSLAPixel &p2)
{
  double h = fabs(p1.h - p2.h);
  double s = p1.s - p2.s;
  double l = p1.l - p2.l;

  // Handle the case where we found the bigger angle between two hues:
  if (h > 180)
  {
    h = 360 - h;
  }
  h /= 360;

  return sqrt((h * h) + (s * s) + (l * l));
}

// /**
//  * Default iterator constructor.
//  */
ImageTraversal::Iterator::Iterator()
{
  given_traversal = NULL;
  // visited_points.resize(given_png.width(), std::vector<bool>(given_png.height()));
  // for (unsigned w = 0; w < given_png.width(); w++)
  // {
  //   for (unsigned h = 0; h < given_png.height(); h++)
  //   {
  //     visited_points[w][h] = false;
  //   }
  // }
}

bool ImageTraversal::Iterator::isViable(Point check_point)
{
  if (check_point.x >= given_png.width() || check_point.x < 0 || check_point.y >= given_png.height() || check_point.y < 0)
  {
    return false;
  }
  auto &initial = given_png.getPixel(start_point.x, start_point.y);
  auto &pos = given_png.getPixel(check_point.x, check_point.y);
  if ((calculateDelta(initial, pos) < given_tolerance) && !visited_points[check_point.x][check_point.y])
  {
    return true;
  }
  return false;
}

ImageTraversal::Iterator::Iterator(PNG png, Point start, double tolerance, ImageTraversal *given)
{
  given_png = png;
  start_point = start;
  current_point = start_point;
  given_tolerance = tolerance;
  given_traversal = given;

  visited_points.resize(given_png.width(), std::vector<bool>(given_png.height()));
  for (unsigned w = 0; w < given_png.width(); w++)
  {
    for (unsigned h = 0; h < given_png.height(); h++)
    {
      visited_points[w][h] = false;
    }
  }

  if (isViable(start))
  {
    visited_points[start_point.x][start_point.y] = true;
  }
}
/**
 * Iterator increment opreator.
 *
 * Advances the traversal of the image.
 */
ImageTraversal::Iterator &ImageTraversal::Iterator::operator++()
{
  visited_points[current_point.x][current_point.y] = true;

  Point right = Point(current_point.x + 1, current_point.y);
  Point left = Point(current_point.x - 1, current_point.y);
  Point up = Point(current_point.x, current_point.y - 1);
  Point down = Point(current_point.x, current_point.y + 1);
  if (isViable(right))
  {
    given_traversal->add(right);
  }
  if (isViable(down))
  {
    given_traversal->add(down);
  }
  if (isViable(left))
  {
    given_traversal->add(left);
  }
  if (isViable(up))
  {
    given_traversal->add(up);
  }

  while (!given_traversal->empty() && !isViable(given_traversal->peek()))
  {
    given_traversal->pop();
    if (given_traversal->empty())
    {
      return *this;
    }
  }
  if (!given_traversal->empty())
  {
    current_point = given_traversal->peek();
  }
  else
  {
    given_traversal = NULL;
  }
  return *this;
}

/**
 * Iterator accessor opreator.
 *
 * Accesses the current Point in the ImageTraversal.
 */
Point ImageTraversal::Iterator::operator*()
{
  return current_point;
}

/**
 * Iterator inequality operator.
 *
 * Determines if two iterators are not equal.
 */
bool ImageTraversal::Iterator::operator!=(const ImageTraversal::Iterator &other)
{
  if (given_traversal == NULL && other.given_traversal == NULL)
  {
    return false;
  }
  else if (given_traversal == NULL || other.given_traversal == NULL)
  {
    return true;
  }
  else if (given_traversal->empty() && other.given_traversal->empty())
  {
    return false;
  }
  else if (given_traversal->empty() || other.given_traversal->empty())
  {
    return true;
  }
  return (given_traversal != other.given_traversal);
}
