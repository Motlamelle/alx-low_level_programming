#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns nth node of listint_t linked list
 * @head: head of linked list
 * @index: position of node
 * Return: the head node’s data (n).
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cursor;
	unsigned int count = 0;

	if (head == NULL)
		return (0);

	cursor = head;
	while (cursor != NULL)
	{
		if (count == index)
			return (cursor);
		count++;
		cursor = cursor->next;
	}

	return (0);
}
