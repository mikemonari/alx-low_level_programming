#include "main.h"

/**
 * main - check the code.
 * Description _isupper -> checks for uppercase character
 * @c: an integer parameter
 * Return: something
 */
int _isupper(int c)
{
	int c;

	if (c >= 65 ; c <= 90 ; c++)
	{
		_putchar("%c: %d\n ", c, _isupper(c));
		return (1);
	}
}
