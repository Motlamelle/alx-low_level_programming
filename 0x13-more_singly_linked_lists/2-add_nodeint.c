#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_nodeint- adds a new node at the beginning of
 * linked list
 * @head: double pointer to linked list
 * @n: node value
 *
 * Return: address of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
