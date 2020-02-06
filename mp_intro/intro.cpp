#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

#include <string>
#include <cmath>
#include <iostream>


void rotate(std::string inputFile, std::string outputFile) {
  cs225::PNG png;
  png.readFromFile(inputFile);
  cs225::PNG png_final(png.width(), png.height());

  int new_width;
  int new_height;

  for (unsigned int i = 0; i < png_final.width(); i++) {
    for (unsigned int j = 0; j < png_final.height(); j++) {
        cs225::HSLAPixel &temp_pixel1 = png.getPixel(i,j);
        new_width = png_final.width() - 1 - i;
        new_height = png_final.height() - 1 - j;
        cs225::HSLAPixel &temp_pixel2 = png_final.getPixel(new_width, new_height);
        temp_pixel2 = temp_pixel1;
    }
  }
  png_final.writeToFile(outputFile);
}

cs225::PNG myArt(unsigned int width, unsigned int height) {
  cs225::PNG png(width, height);
  double hue = 0; // 0-360
  double saturation = 0; // 0-1
  double luminance = 0; // 0-1
  double alpha = 0; // 0-1
  double count_hue = 0;
  int cap = floor(width/7);
  for (unsigned int i = 0; i < png.width(); i++) {
    for (unsigned int j = 0; j < png.height(); j++) {
      int hidden_formula = abs((pow(i,2) - pow(j,2)-(i*j-j*j)) * (j+i) + floor(sqrt(i)));
      if ((hidden_formula - cap) % 7 == 0) {
        // hidden_formula = (i*j - (j+i)*(i*j) + j - i*(j-i));
        // std::cout << hidden_formula%150 << std::endl;
        // hue = 360 - abs(hidden_formula%150);
        hue = count_hue;
        std::cout << hue << std::endl;
        if (count_hue >= 360) {
          count_hue = 0;
        }
        count_hue += 2.5;
        saturation = 1;
        luminance = 0.75;
        alpha = 0.75+(hidden_formula%100)/2000;
      }
      else if ((hidden_formula - cap) % 7 == 1) {
        hue = 2*floor(360/7) - hidden_formula%50;
        saturation = 0.9;
        luminance = 0.8;
        alpha = 0.8+(hidden_formula%100)/2000;
      }
      else if ((hidden_formula - cap) % 7 == 2) {
        hue = 3*floor(360/7) - hidden_formula%50;
        saturation = 0.8;
        luminance = 0.85;
        alpha = 0.85+(hidden_formula%100)/2000;
      }
      else if ((hidden_formula - cap) % 7 == 3) {
        hue = 4*floor(360/7) - hidden_formula%50;
        saturation = 0.7;
        luminance = 0.9;
        alpha = 0.9+(hidden_formula%100)/2000;
      }
      else if ((hidden_formula - cap) % 7 == 4) {
        hue = 5*floor(360/7) - hidden_formula%50;
        saturation = 0.6;
        luminance = 0.2;
        alpha = 0.95+(hidden_formula%100)/2000;
      }
      else if ((hidden_formula - cap) % 7 == 5) {
        hue = 6*floor(360/7) - hidden_formula%50;
        saturation = 0.5;
        luminance = 0.6;
        alpha = 1-(hidden_formula%100)/2000;
      }
      else {
        hue = 360 - hidden_formula%50;
        saturation = 0.4;
        luminance = 0.5;
        alpha = 1-(hidden_formula%100)/2000;
      }
      cs225::HSLAPixel &pixel = png.getPixel(i,j);
      cs225::HSLAPixel attributes(hue, saturation, luminance, alpha);
      pixel = attributes;
    }
  }

  return png;
}
