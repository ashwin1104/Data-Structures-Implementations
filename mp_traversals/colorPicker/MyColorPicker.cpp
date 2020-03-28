#include "../cs225/HSLAPixel.h"
#include "../Point.h"

#include "ColorPicker.h"
#include "MyColorPicker.h"

using namespace cs225;

MyColorPicker::MyColorPicker(PNG png, HSLAPixel pix, double incr)
    : hue(0), basis(png), new_color(pix), increment(incr)
{
}

/**
 * Picks the color for pixel (x, y).
 *
 *
 * @param x The x coordinate to pick a color for.
 * @param y The y coordinate to pick a color for.
 * @return The color selected for (x, y).
 */
HSLAPixel MyColorPicker::getColor(unsigned x, unsigned y)
{
  if (x + y == increment)
  {
    return new_color;
  }
  hue = (int)hue % (50 + x + y);
  while (hue >= 360)
  {
    hue -= 360;
  }
  HSLAPixel pixel(hue, 1, 0.5);
  hue += increment + hue * 0.4;
  while (hue >= 360)
  {
    hue -= 360;
  }
  return pixel;
}