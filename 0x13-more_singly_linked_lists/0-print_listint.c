#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elemnts of a list
 * @h: head pointer to linked list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
