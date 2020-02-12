#include "StickerSheet.h"
#include <iostream>

StickerSheet::StickerSheet(const Image &picture, unsigned max) {
  sticker_ct = 0;
  sticker_max = max;

  base = new Image(picture);
  stickers = new Image*[sticker_max];
  x = new unsigned[sticker_max];
  y = new unsigned[sticker_max];
  layer = new unsigned[sticker_max];

  for (unsigned index = 0; index < sticker_max; index++) {
    layer[index] = 0;
    x[index] = 0;
    y[index] = 0;
    stickers[index] = NULL;
  }
}
StickerSheet::~StickerSheet() {
  _destroy();
}
StickerSheet::StickerSheet(const StickerSheet &other) {
  _copy(other);
}
const StickerSheet & StickerSheet::operator=(const StickerSheet &other) {
  _destroy();
  _copy(other);
  return *this;
}
void StickerSheet::_copy(const StickerSheet &other) {
  sticker_ct = other.sticker_ct;
  sticker_max = other.sticker_max;

  base = new Image(*(other.base));
  stickers = new Image*[sticker_max];
  x = new unsigned[sticker_max];
  y = new unsigned[sticker_max];
  layer = new unsigned[sticker_max];

  for (unsigned index = 0; index < sticker_max; index++) {

    if(other.layer[index]==1) {
      layer[index] = other.layer[index];
      stickers[index]= new Image(*(other.stickers[index]));
      x[index] = other.x[index];
      y[index] = other.y[index];
    }
    else {
      stickers[index]=NULL;
      x[index]=0;
      y[index]=0;
      layer[index]=0;
    }
  }

}
void StickerSheet::_destroy() {
  for (unsigned i = 0; i < sticker_max; i++) {
    if (stickers[i] == NULL || stickers[i] == nullptr) {
      delete stickers[i];
      stickers[i] = nullptr;
    }
  }
  delete[] x;
  delete[] y;
  delete[] layer;
  delete[] stickers;
  x = nullptr;
  y = nullptr;
  layer = nullptr;
  stickers = nullptr;
}
void StickerSheet::changeMaxStickers(unsigned max) {
  if (max == sticker_max) {
    return;
  }
  if (max < sticker_ct) {
    unsigned int count = 0;
    unsigned int index = 0;
    while (count < max && index < sticker_max) {
      if (layer[index] == 1) {
        count++;
      }
      index++;
    }
    for (unsigned int i = index; i < sticker_max; i++) {
      if (layer[index] == 1) {
        std::cout << stickers[index]->width() << std::endl;
        delete stickers[index];
        stickers[index] = nullptr;
        x[index] = 0;
        y[index] = 0;
        layer[index] = 0;
      }
    }
    sticker_ct = count;
  }
  else if (max > sticker_max) {
    unsigned * tempx = new unsigned[max];
    unsigned * tempy = new unsigned[max];
    unsigned * templayer = new unsigned[max];
    Image ** tempstickers = new Image*[max];
    for (unsigned index = 0; index < sticker_max; index++) {
      tempx[index] = x[index];
      tempy[index] = y[index];
      templayer[index] = layer[index];
      tempstickers[index] = stickers[index];
    }
    for (unsigned index = sticker_max; index < max; index++) {
      tempx[index] = 0;
      tempy[index] = 0;
      templayer[index] = 0;
      tempstickers[index] = NULL;
    }
    _destroy();
    x = tempx;
    y = tempy;
    layer = templayer;
    stickers = tempstickers;
  }
  sticker_max = max;
}
int StickerSheet::addSticker(Image &sticker, unsigned x, unsigned y) {
  if (sticker_ct == sticker_max) {
    return -1;
  }
  for (unsigned index = 0; index < sticker_max; index++) {
    if (layer[index] == 0) {
      this->x[index] = x;
      this->y[index] = y;
      stickers[index] = new Image(sticker);
      layer[index] = 1;
      sticker_ct++;
      return index;
    }
  }
  return -1;
}
bool StickerSheet::translate(unsigned index, unsigned x, unsigned y) {
  if (index >= sticker_max || index < 0 || layer[index] == 0) {
    return false;
  }
  this->x[index] = x;
  this->y[index] = y;
  return true;
}
void StickerSheet::removeSticker(unsigned index) {
  if (index < 0 || index >= sticker_max || layer[index] == 0 || stickers[index] == NULL) {
    return;
  }
  x[index] = 0;
  y[index] = 0;
  delete stickers[index];
  stickers[index] = nullptr;
  layer[index] = 0;
  sticker_ct--;
}
Image * StickerSheet::getSticker(unsigned index) {
  if (index < 0 || index >= sticker_max || layer[index] == 0) {
    return NULL;
  }
  return stickers[index];
}
Image StickerSheet::render() const {
  unsigned max_width = base->width();
  unsigned max_height = base->height();
  Image *final = new Image(*base);
  for (unsigned index = 0; index < sticker_max; index++) {
    if (stickers[index] == NULL || stickers[index] == nullptr) {
      continue;
    }
    if (stickers[index]->width() + x[index]> max_width) {
      max_width = stickers[index]->width()+x[index];
    }
    if (stickers[index]->height() +y[index] > max_height) {
      max_height = stickers[index]->height()+y[index];
    }
  }
  final->resize(max_width, max_height);
  int count = 0;
  for (unsigned index = 0; index < sticker_max; index++) {
    count++;
    if (layer[index] == 0) {
      continue;
    }
    for (unsigned p = x[index]; p < stickers[index]->width() + x[index]; p++) {
      for (unsigned q = y[index]; q < stickers[index]->height() + y[index]; q++) {
        if (stickers[index]->getPixel(p-x[index],q-y[index]).a != 0) {
          final->getPixel(p,q).h = stickers[index]->getPixel(p-x[index],q-y[index]).h;
          final->getPixel(p,q).l = stickers[index]->getPixel(p-x[index],q-y[index]).l;
          final->getPixel(p,q).s = stickers[index]->getPixel(p-x[index],q-y[index]).s;
          final->getPixel(p,q).a = stickers[index]->getPixel(p-x[index],q-y[index]).a;
        }
      }
    }
  }
  for (unsigned i = 0; i < max_width; i++) {
    for (unsigned j = 0; j <max_height; j++) {
      final->getPixel(i,j).a = 1;
    }
  }
  Image final2 = *final;
  delete final;
  return final2;
}
