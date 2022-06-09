#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_dnodeint- adds a new node at the beginning of
 * linked list
 * @head: double pointer to linked list
 * @n: node value
 *
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;

	temp->next = *head;
	temp->prev = NULL;

	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;

	return (temp);
}
