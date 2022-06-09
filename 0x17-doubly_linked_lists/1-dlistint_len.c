#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns number of elements in a linked list
 * @h: head pointer to list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
