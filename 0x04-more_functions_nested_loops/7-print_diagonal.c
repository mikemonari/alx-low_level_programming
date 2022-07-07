#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: integer parameter
 */

void print_diagonal(int n)
{
	int x;

	if (n <= 0)
	    _putchar('\n');
	else
	{
		for (x = 0 ; x < n ; x++)
			_putchar('\n');
		_putchar('\n');
	}
}
