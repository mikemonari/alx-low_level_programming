#include "main.h"

/**
 * _puts_recusion - prints a string
 * @s: string parameter
 * Return: the string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
