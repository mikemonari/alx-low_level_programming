#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - Concatenates two strings using an inputted no of bytes
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * Return: a pointer to the concatenated space in memory otherwise NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;

	unsigned int len = n, index;

	if (s1 == NULL)
		S1 = "";
	if (s2 == NULL)
		S2 = "";
	for (index = 0; s1[index]; index++)
		len++;
	concat = malloc(sizeof(char) * (len + 1));
	if (concat == NULL)
		return (NULL);
	len = 0;
	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];
	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];
	concat[len] = '\0';
	return (concat);
}
