#include "main.h"

/**
 * _pow_recursion - returns value of number raised to a number
 * @x: integer to be raised to a power
 * @y: integer param of power to be raised by
 * Return: the raised value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
