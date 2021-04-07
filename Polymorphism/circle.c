
#include "circle.h" /* Circle class interface */

#include <stdio.h> /* for printf() */

/* NOTE: the "me" pointer has the type of the superclass to fit the vtable */
static long Circle_area(Shape const *const me);
static void Circle_draw(Shape const *const me);

/* constructor */
void Circle_Ctor(Circle *const me, int x, int y, int rad) {
  static struct ShapeVtbl const vtbl = {/* vtbl of the Circle class */
                                        &Circle_area, &Circle_draw};
  Shape_Ctor(&me->super, x, y); /* call the superclass' ctor */
  me->super.vptr = &vtbl;       /* override the vptr */
  me->rad = rad;
}

/* Circle's class implementations of its virtual functions... */
static long Circle_area(Shape const *const me) {
  Circle const *const me_ = (Circle const *)me; /* explicit downcast */
  /* pi is approximated as 3 */
  return (3 * me_->rad * me_->rad);
}

static void Circle_draw(Shape const *const me) {
  Circle const *const me_ = (Circle const *)me; /* explicit downcast */
  printf("Circle_draw_(x=%d,y=%d,rad=%d)\n", Shape_getX(me), Shape_getY(me),
         me_->rad);
}
