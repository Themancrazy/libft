#include "vec.h"

void            vec_scale(t_vec *vec, double n)
{
    vec->x *= n;
    vec->y *= n;
    vec->z *= n;
}