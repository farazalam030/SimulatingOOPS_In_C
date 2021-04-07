#include "rect.h"

#include <stdio.h>

static long Rectangle_area(Shape const* const me);
static void Rectangle_draw(Shape const* const me);

void Rectangle_Ctor(Rectangle* const me, int x, int y, int l, int b) {
  static struct ShapeVtbl const vtbl = {&Rectangle_area, &Rectangle_draw};

  Shape_Ctor(&(me->super), x, y);
  me->super.vptr = &vtbl;
  me->length = l;
  me->breadth = b;
}

static long Rectangle_area(Shape const* const me) {
  Rectangle const* const me1 = (Rectangle const*)me;
  return (long)(me1->length * me1->breadth);
}

static void Rectangle_draw(Shape const* const me) {
  Rectangle const* const me1 = (Rectangle const*)me;
  printf("Rectangle_draw ( x=%d; y=%d; len=%d; breadth=%d )\n", Shape_getX(me),
         Shape_getY(me), me1->length, me1->breadth);
}
