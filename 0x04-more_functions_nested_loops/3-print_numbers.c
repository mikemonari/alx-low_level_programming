#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		_putchar("%d", x);
	}
	_putchar("\n");
}
