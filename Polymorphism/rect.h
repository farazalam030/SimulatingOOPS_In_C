#ifndef RECT_H
#define RECT_H
#include "shape.h" /* the base class interface */
/*
 * Rectangle Attributes
 */

typedef struct {
  Shape super;

  int length;
  int breadth;
} Rectangle;

void Rectangle_Ctor(Rectangle* const me, int x, int y, int l, int b);

#endif  // RECT_H
