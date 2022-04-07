#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - return the length of a string
 * @s: string to evaluate
 *
 * Return: length of a string
 **/

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * string_nconcat - concatenate two strings,
 * s2 up to n bytes
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to new concatenated string (SUCCESS); NULL (FAILURE)
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1;
	char *ptr;

	i = 0;
	j = 0;

	if (s1 != NULL)
		len1 = _strlen(s1);
	else
		len1 = 0;

	if (s2 == NULL)
		s2 = "";

	ptr = malloc(len1 + n + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < n; i++, j++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
