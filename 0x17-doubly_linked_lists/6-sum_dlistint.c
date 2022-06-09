#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - returns the sum of all data(n)
 * of a listint_t linked list
 * @head: head of linked list
 * Return: sum of data.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cursor;
	int sum = 0;

	if (head == NULL)
		return (0);

	cursor = head;
	while (cursor != NULL)
	{
		sum += cursor->n;
		cursor = cursor->next;
	}

	return (sum);
}
