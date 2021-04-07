#include "shape.h"

#include <stdio.h>
void Shape_ctor(Shape* const me, int x, int y) {
  me->x = x;
  me->y = y;
}

void Shape_Move(Shape* const me, int dx, int dy) {
  me->x += dx;
  me->y += dy;
}
int Shape_getX(Shape* const me) { return (me->x); }
int Shape_getY(Shape* const me) { return (me->y); }

int main() {
  Shape S1, S2;
  Shape_ctor(&S1, 0, 1);
  Shape_ctor(&S2, -1, 2);

  printf("Shape S1 (x= %d ; y = %d) \n", Shape_getX(&S1), Shape_getY(&S1));
  printf("Shape S2 (x= %d ; y = %d) \n", Shape_getX(&S2), Shape_getY(&S2));

  Shape_Move(&S1, 5, -10);
  Shape_Move(&S2, -20, +100);

  printf("Shape S1 (x= %d ; y = %d) \n", Shape_getX(&S1), Shape_getY(&S1));
  printf("Shape S2 (x= %d ; y = %d) \n", Shape_getX(&S2), Shape_getY(&S2));

  return 0;
}
