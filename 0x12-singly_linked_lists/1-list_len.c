#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @h: const list_t pointer argument to struct
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
