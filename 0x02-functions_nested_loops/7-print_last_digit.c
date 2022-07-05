#include "main.h"
/**
 * main - check the code
 * int print_last_digit -> prints the last digit of a number.
 * Return: Always 0
 *
 */
int print_last_digit(int)
{
	int x;

	if (n < 0)
	n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
