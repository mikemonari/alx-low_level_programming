#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: number of bytes to be copied
 * @src: source memory
 * @dest: is destination memory
 * Return: string copied from src
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
		dest[a] = src[a];
	return (dest);
}
