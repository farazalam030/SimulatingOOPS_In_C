#ifndef SHAPE_H
#define SHAPE_H

/*
 * Shapes' attributes
 */

typedef struct {
  int x;
  int y;
} Shape;

/*
 * shape's Operations
 */

void Shape_Ctor(Shape* const me, int x, int y);
void Shape_Move(Shape* const me, int dx, int dy);
int Shape_getX(Shape* const me);
int Shape_getY(Shape* const me);

#endif
/*
 * SHAPE_H
 */
