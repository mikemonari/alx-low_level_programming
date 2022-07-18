#include "main.h"

/**
 * _memset - a memoery set function
 * @s: string
 * @b: character
 * @n: integer variable
 * Return: a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; n++)
		s[a] = b;
	return (s);
}
