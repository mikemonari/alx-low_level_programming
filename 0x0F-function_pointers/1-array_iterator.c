#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - This function prints out all contents in the array
 * @array: The array being passed in
 * @size: The size of the array. In other words, the number of indexes
 * @action: The pointer to a function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	void (*ptr)(int);

	if (size <= 0)
		return;
	if (array == NULL || action == NULL)
		return;
	ptr = action;
	for (i = 0 ; i < size ; i++)
		ptr(array[i]);
}
