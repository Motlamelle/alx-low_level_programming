#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of linked list
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *cursor;
	int v;

	if (head == NULL)
		return (0);

	cursor = *head;
	if (cursor == NULL)
		return (0);

	v = cursor->n;
	*head = cursor->next;
	free(cursor);
	return (v);
}
