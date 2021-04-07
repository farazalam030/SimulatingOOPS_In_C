
#include <stdio.h> /* for printf() */

#include "circle.h" /* Circle class interface */
#include "rect.h"   /* Rectangle class interface */

int main() {
  Rectangle r1, r2;        /* multiple instances of Rectangle */
  Circle c1, c2;           /* multiple instances of Circle */
  Shape const *shapes[] = {/* collection of shapes */
                           &c1.super, &r2.super, &c2.super, &r1.super};
  Shape const *s;

  /* instantiate rectangles... */
  Rectangle_Ctor(&r1, 0, 2, 10, 15);
  Rectangle_Ctor(&r2, -1, 3, 5, 8);

  /* instantiate circles... */
  Circle_Ctor(&c1, 1, -2, 12);
  Circle_Ctor(&c2, 1, -3, 6);

  s = largestShape(shapes, sizeof(shapes) / sizeof(shapes[0]));
  printf("largetsShape s(x=%d,y=%d)\n", Shape_getX(s), Shape_getY(s));

  drawAllShapes(shapes, sizeof(shapes) / sizeof(shapes[0]));

  return 0;
}
