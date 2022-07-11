#include "main.h"

/*
 * _strlen - function to get the length of a string
 * @s: string pointer to be passed to this function
 * Return: returns length of the string
 */

int _strlen(char *s)
{
	int len;

	while(; *s != '\0' ; s++)
	{
		len += 1;
	}
	return (strlen(s));
}
