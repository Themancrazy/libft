#include "vec.h"

void            vec_rotxyz(t_vec *vec, double angle)
{
    vec_rotx(vec, angle);
    vec_roty(vec, angle);
    vec_rotz(vec, angle);
}