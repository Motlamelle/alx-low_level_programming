#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: size in bytes of each element
 *
 * Return: pointer to newly allocated memory initialized to 0 (SUCCESS)
 * NULL (FAILURE)
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= nmemb; i++)
			ptr[i] = 0;
	}
	return (ptr);
}
