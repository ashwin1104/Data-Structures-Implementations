#pragma once

#include "ColorPicker.h"
#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"

using namespace cs225;

/**
 * A color picker class using your own color picking algorithm
 */
class MyColorPicker : public ColorPicker
{
public:
  MyColorPicker(PNG png, double increment);
  HSLAPixel getColor(unsigned x, unsigned y);

private:
  double hue;
  PNG basis;
  double increment;
};
