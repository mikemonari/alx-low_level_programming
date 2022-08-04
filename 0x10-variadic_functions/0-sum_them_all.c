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
	if (n == 0)
		return (0);
	va_list mylist;

	va_start(mylist, n);

	va_arg(mylist, int);

	int result;

	result = n + va_arg(mylist, int);

	va_end(mylist);

	return (result);
}
