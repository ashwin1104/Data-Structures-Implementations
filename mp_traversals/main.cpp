
#include "cs225/PNG.h"
#include "FloodFilledImage.h"
#include "Animation.h"

#include "imageTraversal/DFS.h"
#include "imageTraversal/BFS.h"

#include "colorPicker/RainbowColorPicker.h"
#include "colorPicker/GradientColorPicker.h"
#include "colorPicker/GridColorPicker.h"
#include "colorPicker/SolidColorPicker.h"
#include "colorPicker/MyColorPicker.h"

using namespace cs225;

int main()
{

  PNG png;
  png.readFromFile("lambo.png");
  FloodFilledImage image(png);
  BFS bfs(png, Point(350, 150), 0.92);
  HSLAPixel first_col(120, 230, 0.2);
  HSLAPixel second_col(300, 123, 0.9);
  MyColorPicker first(png, first_col, 5);
  MyColorPicker second(png, second_col, 30);
  image.addFloodFill(bfs, first);
  image.addFloodFill(bfs, second);

  Animation animation = image.animate(1200);
  PNG lastFrame = animation.getFrame(animation.frameCount() - 1);
  lastFrame.writeToFile("myFloodFill.png");
  animation.write("myFloodFill.gif");

  return 0;
}
