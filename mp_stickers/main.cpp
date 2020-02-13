#include "Image.h"
#include "StickerSheet.h"
#include <iostream>

int main() {
  Image electricity;
  Image colors;
  Image mine;
  Image enlighten;
  Image enlighten2;
  Image skull;
  Image mine2;
  Image backdrop;
  Image backdrop2;
  Image fire;
  Image black;

  colors.readFromFile("colors.png");
  backdrop.readFromFile("backdrop.png");
  backdrop2.readFromFile("backdrop2.png");
  electricity.readFromFile("electricity.png");
  mine.readFromFile("art3.png");
  enlighten.readFromFile("enlighten.png");
  enlighten2.readFromFile("enlighten2.png");
  skull.readFromFile("skull.png");
  mine2.readFromFile("mine2.png");
  fire.readFromFile("fire.png");
  black.readFromFile("black.png");

  StickerSheet sheet(black, 11);
  sheet.addSticker(backdrop2, 0,0);
  sheet.addSticker(backdrop,150,0);
  sheet.addSticker(colors,0,0);
  sheet.addSticker(mine, 1000,0);
  sheet.addSticker(mine2,1120,0);
  sheet.addSticker(enlighten2,600,250);
  sheet.addSticker(enlighten,600,250);
  sheet.addSticker(fire, 0, 0);
  sheet.addSticker(skull, 0,0);
  sheet.addSticker(electricity, 800, 450);

  Image expected = sheet.render();
  expected.writeToFile("myImage.png");
  return 0;
}
