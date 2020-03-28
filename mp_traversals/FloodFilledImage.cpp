#include "cs225/PNG.h"
#include <list>
#include <iostream>

#include "colorPicker/ColorPicker.h"
#include "imageTraversal/ImageTraversal.h"

#include "Point.h"
#include "Animation.h"
#include "FloodFilledImage.h"

using namespace cs225;

/**
 * Constructs a new instance of a FloodFilledImage with a image `png`.
 * 
 * @param png The starting image of a FloodFilledImage
 */
FloodFilledImage::FloodFilledImage(const PNG &png)
{
  given_png = new PNG(png);
}

/**
 * Adds a FloodFill operation to the FloodFillImage.  This function must store the operation,
 * which will be used by `animate`.
 * 
 * @param traversal ImageTraversal used for this FloodFill operation.
 * @param colorPicker ColorPicker used for this FloodFill operation.
 */
void FloodFilledImage::addFloodFill(ImageTraversal &traversal, ColorPicker &colorPicker)
{
  ImageTraversal *trav = &traversal;
  ColorPicker *cp = &colorPicker;
  traversals.push_back(trav);
  colorPickers.push_back(cp);
}

/**
 * Creates an Animation of frames from the FloodFill operations added to this object.
 * 
 * Each FloodFill operation added by `addFloodFill` is executed based on the order
 * the operation was added.  This is done by:
 * 1. Visiting pixels within the image based on the order provided by the ImageTraversal iterator and
 * 2. Updating each pixel to a new color based on the ColorPicker
 * 
 * While applying the FloodFill to the image, an Animation is created by saving the image
 * after every `frameInterval` pixels are filled.  To ensure a smooth Animation, the first
 * frame is always the starting image and the final frame is always the finished image.
 * 
 * (For example, if `frameInterval` is `4` the frames are:
 *   - The initial frame
 *   - Then after the 4th pixel has been filled
 *   - Then after the 8th pixel has been filled
 *   - ...
 *   - The final frame, after all pixels have been filed)
 */
Animation FloodFilledImage::animate(unsigned frameInterval) const
{
  Animation animation;
  unsigned num_pixels;
  animation.addFrame(*given_png);
  for (int i = 0; i < (int)traversals.size(); i++)
  {
    ImageTraversal *trav = traversals[i];
    ColorPicker *cp = colorPickers[i];
    unsigned num_pixels = 0;
    for (ImageTraversal::Iterator it = trav->begin(); it != trav->end(); ++it)
    {
      int x = (*it).x;
      int y = (*it).y;
      cs225::HSLAPixel color_pixel = cp->getColor(x, y);

      if (num_pixels == frameInterval)
      {
        animation.addFrame(*given_png);
        num_pixels = 0;
      }
      given_png->getPixel(x, y).h = color_pixel.h;
      given_png->getPixel(x, y).s = color_pixel.s;
      given_png->getPixel(x, y).l = color_pixel.l;
      given_png->getPixel(x, y).a = color_pixel.a;
      num_pixels++;
    }
  }
  animation.addFrame(*given_png);
  return animation;
}
