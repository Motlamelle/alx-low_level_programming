#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character to initialize array
 * Return: pointer to an array (Success) NULL (Failure)
 **/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (!(size > 0))
	{
		return (NULL);
	}
	p = malloc((sizeof(char)) * size);

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;

		while (i < size)
		{
			p[i] = c;
			i++;
		}
	}
	return ((char *)p);
}
