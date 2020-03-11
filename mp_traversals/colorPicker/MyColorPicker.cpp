#include "../cs225/HSLAPixel.h"
#include "../Point.h"

#include "ColorPicker.h"
#include "MyColorPicker.h"

using namespace cs225;

MyColorPicker::MyColorPicker(PNG png, double increment)
    : hue(0), basis(png), increment(increment)
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
  if (((x * y - (x + y) / (x - y)) * y) % 5 == 0)
  {
    hue++;
  }
  if (((x * y - (x + y) / (x - y)) * y) % 5 == 1)
  {
    hue += 37;
  }
  if (((x * y - (x + y) / (x - y)) * y) % 5 == 2)
  {
    hue += 60;
  }
  if (((x * y - (x + y) / (x - y)) * y) % 5 == 3)
  {
    hue += 194;
  }
  if (((x * y - (x + y) / (x - y)) * y) % 5 == 4)
  {
    hue += 300;
  }
  hue = (int)hue % (50 + x + y);
  while (hue >= 360)
  {
    hue -= 360;
  }
  HSLAPixel pixel(hue, 1, 0.5);
  hue += increment;
  while (hue >= 360)
  {
    hue -= 360;
  }
  return pixel;
  return basis.getPixel(x, y);
}