#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletse node at index
 * @head: pointer to double linked list
 * @index: index of node to be deleted
 * Return: 1 if succeeded or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cursor = *head;

	if (head == NULL)
		return (-1);
	if (head)
	{
		while (index && cursor)
		{
			cursor = cursor->next;
			index--;
		}
		if (index)
			return (-1);
		if (!index && cursor)
		{
			if (cursor->next)
				cursor->next->prev = cursor->prev;
			if (cursor->prev)
				cursor->prev->next = cursor->next;
			else
				*head = cursor->next;
			free(cursor);
			return (1);
		}
	}
	return (-1);
}
