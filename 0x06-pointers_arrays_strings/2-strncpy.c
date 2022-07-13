#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: first parameter
 * @src: second parameter
 * @n: integer parameter
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
