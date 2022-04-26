#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: pointer to struct of linked list
 * @n: note int value
 *
 * Return: address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *cursor;

	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
		return (NULL);

	end_node->n = n;

	end_node->next = NULL;

	if (*head)
	{
	cursor = *head;
	while (cursor->next != NULL)
		cursor = cursor->next;
	cursor->next = end_node;
	}
	else
		*head = end_node;
	return (end_node);
}
