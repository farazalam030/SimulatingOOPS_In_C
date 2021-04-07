#include "shape.h"

void Shape_Ctor(Shape* const me, int x, int y) {
  me->x = x;
  me->y = y;
}

void Shape_Move(Shape* const me, int dx, int dy) {
  me->x += dx;
  me->y += dy;
}
int Shape_getX(Shape* const me) { return (me->x); }
int Shape_getY(Shape* const me) { return (me->y); }
