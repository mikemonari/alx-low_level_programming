#include "main.h"

/*
 * swap_int - fucntion that swaps values of two integers
 * @a: pointer to be updated
 * @b: pointer to be updated
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
