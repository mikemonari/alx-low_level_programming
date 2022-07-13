#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * @n: integer parameter
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
