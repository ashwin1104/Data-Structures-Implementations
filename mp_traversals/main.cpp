
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
  png.readFromFile("i.png");
  FloodFilledImage image(png);
  DFS dfs(png, Point(0, 0), 100);
  HSLAPixel color1(120, 230, 10);
  HSLAPixel color2(200, 123, 90);
  MyColorPicker mine_first(png, 5);
  MyColorPicker mine_second(png, 30);

  image.addFloodFill(dfs, mine_first);
  image.addFloodFill(dfs, mine_second);

  Animation animation = image.animate(1);
  PNG lastFrame = animation.getFrame(animation.frameCount() - 1);
  lastFrame.writeToFile("myFloodFill.png");
  animation.write("myFloodFill.gif");

  return 0;
}
