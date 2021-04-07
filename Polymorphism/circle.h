#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h" /* the base class interface */

typedef struct {
  Shape super; /* <== inherits Shape */

  /* attributes added by this subclass... */
  int rad;
} Circle;

/* constructor */
void Circle_Ctor(Circle* const me, int x, int y, int rad);

#endif /* CIRCLE_H */
