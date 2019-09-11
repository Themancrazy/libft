#include "vec.h"

void            vec_roty(t_vec *vec, double angle)
{
    vec->x = ((vec->x * cos(angle)) + (vec->z * sin(angle)));
    vec->z = ((-vec->x * sin(angle)) + (vec->z * cos(angle)));
}