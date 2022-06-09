#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of list
 * @head: pointer to struct of linked list
 * @n: note int value
 *
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node, *cursor;

	end_node = malloc(sizeof(dlistint_t));
	if (end_node == NULL)
		return (NULL);

	end_node->n = n;

	end_node->next = NULL;
	end_node->prev = NULL;

	if (*head)
	{
	cursor = *head;
	while (cursor->next != NULL)
		cursor = cursor->next;
	cursor->next = end_node;
	end_node->prev = cursor;
	}
	else
		*head = end_node;
	return (end_node);
}
