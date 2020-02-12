#pragma once
#include "Image.h"

class StickerSheet {
public:
  Image ** stickers;
  unsigned * x;
  unsigned * y;
  unsigned * layer;
  Image * base;
  unsigned sticker_ct;
  unsigned sticker_max;

  StickerSheet(const Image &picture, unsigned max);
  ~StickerSheet();
  StickerSheet(const StickerSheet &other);
  const StickerSheet & operator=(const StickerSheet &other);
  void changeMaxStickers(unsigned max);
  int addSticker(Image &sticker, unsigned x, unsigned y);
  bool translate(unsigned index, unsigned x, unsigned y);
  void removeSticker(unsigned index);
  Image * getSticker(unsigned index);
  Image render() const;
private:
  void _copy(const StickerSheet &other);
  void _destroy();
};
