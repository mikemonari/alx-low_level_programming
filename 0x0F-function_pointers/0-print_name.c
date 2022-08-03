#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function pointer
 * Return: 0 success
 */

void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);

	if (name == NULL || f == NULL)
		return;
	ptr = f;
	ptr(name);
}
