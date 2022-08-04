#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function that sums up all parameters added
 * @n: the first argument
 * Return: sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list mylist;

	va_start(mylist, n);

	if (n == 0)
		return (0);
	for (i = 0 ; i < n ; i++)
	{
		sum += va_arg(mylist, int);
	}
	va_end(mylist);
	return (sum);
}
