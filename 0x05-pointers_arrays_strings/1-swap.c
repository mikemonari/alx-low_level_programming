#include "main.h"

/*
 * swap_int - fucntion that swaps values of two integers
 * @a: pointer to be updated
 * @b: pointer to be updated
 */

void swap_int(int *a, int *b)
{
	int x;
	int *n;
	int y;
	int *b;

	x = 1;
	*a = &x;
	y = 2;
	*b = &y;

	*a = *b;
	*b = *a;
}
