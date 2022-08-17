#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  print_listint - prints elements of a linked list
 *  @h: linked list of type listint_t to print
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
