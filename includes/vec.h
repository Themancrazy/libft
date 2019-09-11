#ifndef VEC_H
# define VEC_H

#include "libft.h"

typedef struct  s_vec
{
	double		x;
	double		y;
	double		z;
}               t_vec;

t_vec			vec_new(double x, double y, double z);
void			vec_add(t_vec *v1, t_vec *v2);
void			vec_sub(t_vec *v1, t_vec *v2);
void			vec_scale(t_vec *vec, double n);

void			vec_rotx(t_vec *vec, double angle);
void			vec_roty(t_vec *vec, double angle);
void			vec_rotz(t_vec *vec, double angle);
void			vec_rotxyz(t_vec *vec, double angle);

#endif
