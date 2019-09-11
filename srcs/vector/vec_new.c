#include "vec.h"

t_vec			vec_new(double x, double y, double z)
{
	t_vec		vector;

	vector.x = x;
	vector.y = y;
	vector.z = z;
	return (vector);
}
