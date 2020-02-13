#include "Image.h"
#include <string>
#include <iostream>
#include <cmath>

void Image::lighten() {
  for (unsigned x = 0; x < width(); x++) {
    for (unsigned y = 0; y < height(); y++) {
      if (this->getPixel(x,y).l+0.1 <= 1.0) {
        this->getPixel(x,y).l += 0.1;
      }
      else {
        this->getPixel(x,y).l = 1.0;
      }
    }
  }
}
void Image::lighten(double amount) {
  for (unsigned x = 0; x < width(); x++) {
    for (unsigned y = 0; y < height(); y++) {
      if (this->getPixel(x,y).l+amount <= 1.0) {
        this->getPixel(x,y).l += amount;
      }
      else {
        this->getPixel(x,y).l = 1.0;
      }
    }
  }
}
void Image::darken() {
  for (unsigned x = 0; x < this->width(); x++) {
    for (unsigned y = 0; y < this->height(); y++) {
      if (this->getPixel(x,y).l-0.1 >= 0) {
        this->getPixel(x,y).l -= 0.1;
      }
      else {
        this->getPixel(x,y).l = 0.0;
      }
    }
  }
}
void Image::darken(double amount) {
  for (unsigned x = 0; x < this->width(); x++) {
    for (unsigned y = 0; y < this->height(); y++) {
      if (this->getPixel(x,y).l-amount >= 0) {
        this->getPixel(x,y).l -= amount;
      }
      else {
        this->getPixel(x,y).l = 0.0;
      }
    }
  }
}
void Image::saturate() {
  for (unsigned x = 0; x < this->width(); x++) {
    for (unsigned y = 0; y < this->height(); y++) {
      if (this->getPixel(x,y).s+0.1 <= 1.0) {
        this->getPixel(x,y).s += 0.1;
      }
      else {
        this->getPixel(x,y).s = 1.0;
      }
    }
  }
}
void Image::saturate(double amount) {
  for (unsigned x = 0; x < this->width(); x++) {
    for (unsigned y = 0; y < this->height(); y++) {
      if (this->getPixel(x,y).s+amount <= 1.0) {
        this->getPixel(x,y).s += amount;
      }
      else {
        this->getPixel(x,y).s = 1.0;
      }
    }
  }
}
void Image::desaturate() {
  for (unsigned x = 0; x < this->width(); x++) {
    for (unsigned y = 0; y < this->height(); y++) {
      if (this->getPixel(x,y).s-0.1 >= 0.0) {
        this->getPixel(x,y).s -= 0.1;
      }
      else {
        this->getPixel(x,y).s = 0.0;
      }
    }
  }
}
void Image::desaturate(double amount) {
  for (unsigned x = 0; x < this->width(); x++) {
    for (unsigned y = 0; y < this->height(); y++) {
      if (this->getPixel(x,y).s-amount >= 0.0) {
        this->getPixel(x,y).s -= amount;
      }
      else {
        this->getPixel(x,y).s = 0.0;
      }
    }
  }
}
void Image::grayscale() {
  for (unsigned x = 0; x < this->width(); x++) {
    for (unsigned y = 0; y < this->height(); y++) {
      this->getPixel(x,y).s = 0.0;
    }
  }
}
void Image::rotateColor(double degrees) {
  for (unsigned x = 0; x < this->width(); x++) {
    for (unsigned y = 0; y < this->height(); y++) {
      this->getPixel(x,y).h += degrees;
      if (this->getPixel(x,y).h > 360) {
        this->getPixel(x,y).h -= 360;
      }
      else if (this->getPixel(x,y).h < 0) {
        this->getPixel(x,y).h += 360;
      }
    }
  }
}
void Image::illinify() {
  double illini_orange = 11;
  double illini_blue = 216;
  double distance_orange;
  double distance_blue;
  for (unsigned x = 0; x < this->width(); x++) {
    for (unsigned y = 0; y < this->height(); y++) {
      cs225::HSLAPixel &pixel = this->getPixel(x,y);
      distance_orange = abs(pixel.h - illini_orange);
      distance_blue = abs(pixel.h - illini_blue);
      if (abs(pixel.h - 360 - illini_orange) < distance_orange) {
        distance_orange = abs(pixel.h - 360 - illini_orange);
      }
      if (abs(pixel.h - 360 - illini_blue) < distance_blue) {
        distance_blue = abs(pixel.h - 360 - illini_blue);
      }
      if (distance_orange/distance_blue > 1) {
        pixel.h = illini_blue;
      }
      else {
        pixel.h = illini_orange;
      }
    }
  }
}
void Image::scale(double factor) {
  unsigned height = factor*(this->height());
  unsigned width = factor*(this->width());
  double xreverse = (this->width())/((double) width);
  double yreverse = (this->height())/((double) height);
  if (xreverse > yreverse) {
    xreverse = yreverse;
  }
  else {
    yreverse = xreverse;
  }
  cs225::PNG old(*this);
  resize(width, height);
  for (unsigned int x = 0; x < width; x++) {
    for (unsigned int y = 0; y < height; y++) {
      getPixel(x,y) = old.getPixel((int)x*xreverse,(int)y*yreverse);
    }
  }
}
void Image::scale(unsigned w, unsigned h) {
  double xfactor = (double) w/width();
  double yfactor = (double) h/height();
  double factor;
  if (xfactor > yfactor) {
    scale(yfactor);
  }
  else {
    scale(xfactor);
  }
}
