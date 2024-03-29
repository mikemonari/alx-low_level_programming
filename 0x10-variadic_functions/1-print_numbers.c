#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: what should separate functions
 * @n: no of arguments passed in
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	int num;

	va_list mylist;

	va_start(mylist, n);

	for (i = 0; i < n ; i++)
	{
		num = va_arg(mylist, int);
		printf("%d", num);
		if ((i != n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(mylist);
	printf("\n");
}
