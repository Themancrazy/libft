#include "vec.h"

void            vec_rotx(t_vec *vec, double angle)
{
    vec->y = ((vec->y * cos(angle)) + (vec->z * sin(angle)));
    vec->z = ((-vec->y * sin(angle)) + (vec->z * cos(angle)));
}