#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node to linked list
 * @head: double pointer to linked list
 * @str: string pointer
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int count = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	while (str[count] != '\0')
		count++;
	temp->len = count;
	temp->next = *head;
	*head = temp;
	return (temp);
}
