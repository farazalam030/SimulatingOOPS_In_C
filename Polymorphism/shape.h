#ifndef SHAPE_H
#define SHAPE_H
#include <stdint.h>

/*
 * Shapes' attributes
 */
struct ShapeVtbl; /* forward declaration */
typedef struct {
  struct ShapeVtbl const* vptr;
  int x;
  int y;
} Shape;
/*
 * Shape's Vtable
 */

struct ShapeVtbl {
  long (*area)(Shape const* const me);
  void (*draw)(Shape const* const me);
};

/*
 * shape's Operations
 */

void Shape_Ctor(Shape* const me, int x, int y);
void Shape_Move(Shape* const me, int dx, int dy);
int Shape_getX(Shape const* const me);
int Shape_getY(Shape const* const me);

static inline long Shape_area(Shape const* const me) {
  return (*me->vptr->area)(me);
}

static inline void Shape_draw(Shape const* const me) { (*me->vptr->draw)(me); }

/* generic operations on collections of Shapes */
Shape const* largestShape(Shape const* shapes[], int nShapes);
void drawAllShapes(Shape const* shapes[], int nShapes);

#endif
/*
 * SHAPE_H
 */
