#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node at a given position.
 * @head: head of linked list
 * @index: index to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cursor;
	listint_t *tmp;

	if (head == NULL || (*head) == NULL)
		return (-1);

	cursor = *head;
	if (index == 0)
	{
		if ((*head)->next)
			(*head) = (*head)->next;
		else
			(*head) = NULL;
		free(cursor);
		return (1);
	}

	while (index != 1)
	{
		if (cursor->next == NULL)
			return (-1);

		cursor = cursor->next;
		--index;
	}
	tmp = cursor->next;
	if (cursor->next->next)
		cursor->next = cursor->next->next;
	else
		cursor->next = NULL;
	free(tmp);

	return (1);
}
