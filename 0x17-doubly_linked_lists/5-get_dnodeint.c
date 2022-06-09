#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - returns nth node of listint_t linked list
 * @head: head of linked list
 * @index: position of node
 * Return: the head node’s data (n).
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cursor;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	cursor = head;
	while (cursor != NULL)
	{
		if (count == index)
			return (cursor);
		count++;
		cursor = cursor->next;
	}

	return (NULL);
}

