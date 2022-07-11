#include "main.h"

/*
 * swap_int ->given two integers swap the values they are holding
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
