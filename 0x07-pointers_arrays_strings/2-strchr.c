#include "main.h"

/**
 * _strchr  - string character
 * @s: string given
 * @C: another character
 * Return: a string
 */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
