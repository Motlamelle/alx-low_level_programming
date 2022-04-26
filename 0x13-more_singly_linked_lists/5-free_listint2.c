#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to list_t
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *cursor;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		cursor = *head;
		*head = (*head)->next;
		free(cursor);

	}

}
