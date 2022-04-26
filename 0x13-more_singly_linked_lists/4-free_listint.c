#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to list_t
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *cursor;

	if (head == NULL)
		return;

	while (head)
	{
		cursor = head->next;
		free(head);
		head = cursor;
	}

	free(head);
}
