#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @head: head of linked list
 * @idx: index to insert the node
 * @n: new node data
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *new;
	dlistint_t *temp2;
	unsigned int count = 0;

	if (head == NULL)
		return (0);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);

	if (idx == 0)
	{
		new = add_dnodeint(head, n);
		return (new);
	}

	temp = *head;
	temp2 = NULL;

	while (temp != NULL)
	{
		if (idx == count)
		{
			temp2 = temp->next;
			temp->next = new;
			temp2->prev = new;
			new->next = temp2;
			new->prev = temp;

			return (new);
		}

		temp = temp->next;
		count++;
	}

	return (NULL);
}
