#include <stdio.h>

#include "shape.h"

int main() {
  Shape S1, S2;
  Shape_Ctor(&S1, 0, 1);
  Shape_Ctor(&S2, -1, 2);

  printf("Shape S1 (x= %d ; y = %d) \n", Shape_getX(&S1), Shape_getY(&S1));
  printf("Shape S2 (x= %d ; y = %d) \n", Shape_getX(&S2), Shape_getY(&S2));

  Shape_Move(&S1, 5, -10);
  Shape_Move(&S2, -20, +100);

  printf("Shape S1 (x= %d ; y = %d) \n", Shape_getX(&S1), Shape_getY(&S1));
  printf("Shape S2 (x= %d ; y = %d) \n", Shape_getX(&S2), Shape_getY(&S2));

  return 0;
}
