#include "shape.h"

#include <assert.h>

static long Shape_area_(Shape const* const me);
static void Shape_draw_(Shape const* const me);

void Shape_Ctor(Shape* const me, int x, int y) {
  static struct ShapeVtbl const vtbl = {&Shape_area, &Shape_draw};
  me->vptr = &vtbl; /* "hook" the vptr to the vtbl */
  me->x = x;
  me->y = y;
}

void Shape_Move(Shape* const me, int dx, int dy) {
  me->x += dx;
  me->y += dy;
}

int Shape_getX(Shape const* const me) { return (me->x); }
int Shape_getY(Shape const* const me) { return (me->y); }

static void Shape_draw_(Shape const* const me) {
  assert(0); /*pure virtual function should never be called */
}

static long Shape_area_(Shape const* const me) {
  assert(0); /*pure virtual function should never be called */
  return 0L;
}

Shape const* largestShape(Shape const* shapes[], int nShapes) {
  Shape const* s = (Shape*)0;
  long max = 0L;
  int i;
  for (i = 0; i < nShapes; ++i) {
    long area = Shape_area(shapes[i]); /* virtual call */
    if (area > max) {
      max = area;
      s = shapes[i];
    }
  }
  return s; /* the largest shape in the array shapes[] */
}
void drawAllShapes(Shape const* shapes[], int nShapes) {
  int i;
  for (i = 0; i < nShapes; ++i) {
    Shape_draw(shapes[i]); /* virtual call */
  }
}
