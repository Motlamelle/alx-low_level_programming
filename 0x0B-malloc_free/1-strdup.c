#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - return the length of a string
 * @s: string to evaluate
 *
 * Return: length of string
 **/

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i + 1;
	return (i);
}

/**
 * _strdup - returns a pointer to newly acclocated space in memory
 * which contains a copy ofof the string given as a paramter
 * @str: string to copy
 * Return: pointer to duplicated string (Success), NULL (Failure)
 **/

char *_strdup(char *str)
{
	int j, len;
	char *p;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);

	if (len <= 0)
		return (NULL);

	p = malloc(len * sizeof(char));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	else
	{
		for (j = 0; j < len; j++)
		{
			p[j] = str[j];
		}
		p[j] = '\0';
		return ((char *)p);
	}
}
