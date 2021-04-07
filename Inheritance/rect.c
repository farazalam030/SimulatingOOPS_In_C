#include "rect.h"

void Rectangle_Ctor(Rectangle* const me, int x, int y, int l, int b) {
  Shape_Ctor(&(me->super), x, y);
  me->length = l;
  me->breadth = b;
}
