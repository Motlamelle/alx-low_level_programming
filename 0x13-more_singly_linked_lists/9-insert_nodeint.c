#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a newnpde at a given position
 * @head: head of linked list
 * @idx: position of node
 * @n: value of node
 * Return: address of the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cursor;
	listint_t *new;
	unsigned int count = 0;

	if (head == NULL)
		return (0);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (0);

	/* if idx = 0, add node at the beginning of list */
	if (idx == 0)
	{
		new->next = *head;
		new->n = n;
		(*head) = new;
		return (new);
	}

	cursor = *head;
	while (cursor != NULL)
	{
		if (count == idx)
		{	new->next = cursor->next;
			cursor->next = new;

			return (new);
		}
		count++;
		cursor = cursor->next;
	}
	free(new);
	return (NULL);
}
