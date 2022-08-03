#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - returns the index of the first element.
 * @array: array being passed in
 * @size: number of elements in the array
 * @cmp: a pointer to the function, used to compare values
 * Return: the index of first match. -1 if invalid size or no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	int (*ptr)(int);

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	ptr = cmp;
	for (i = 0 ; i < size ; i++)
	{
		if (ptr(array[i]))
			return (i);
	}
	return (-1);
}
