#include "main.h"

/*
 * reset_to_98:  update value of a pointer
 * @n: integer parameter
 * Return : On success 1.
 */

void reset_to_98(int *n)
{
	int n;
	int *p;

	p = &n;

	*p = 98;
	return (0);
}
