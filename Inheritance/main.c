#include <stdio.h>

#include "rect.h"

int main() {
  Rectangle r1, r2;

  Rectangle_Ctor(&r1, 0, 1, 4, 5);
  Rectangle_Ctor(&r2, -2, 4, 100, 10);

  printf("Rect r1 ( x=%d; y=%d; len=%d; breadth=%d )\n", r1.super.x, r1.super.y,
         r1.length, r1.breadth);
  printf("Rect r2 ( x=%d; y=%d; len=%d; breadth=%d )\n", r2.super.x, r2.super.y,
         r2.length, r2.breadth);

  // reusing superclass Move function

  Shape_Move((Shape*)&r1, 0, -1);
  Shape_Move(&r2.super, 2, -4);

  printf("Rect r1 ( x=%d; y=%d; len=%d; breadth=%d )\n", r1.super.x, r1.super.y,
         r1.length, r1.breadth);
  printf("Rect r2 ( x=%d; y=%d; len=%d; breadth=%d )\n", r2.super.x, r2.super.y,
         r2.length, r2.breadth);
  return 0;
}
