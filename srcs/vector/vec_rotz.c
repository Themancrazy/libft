#include "vec.h"

void            vec_rotz(t_vec *vec, double angle)
{
    vec->x = ((vec->x * cos(angle)) - (vec->y * sin(angle)));
    vec->y = ((vec->x * sin(angle)) + (vec->y * cos(angle)));
}