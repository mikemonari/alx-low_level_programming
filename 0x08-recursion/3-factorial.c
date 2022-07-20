#include "main.h"

/**
 * int factorial - returns factorial of a number
 * @n: integer parameter
 * Return: the factorials
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (n * (n - 1));
}
