#include "main.h"
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
 * str_concat - Entry Point
 * @s1: first string
 * @s2: second string
 *
 * Descrption: concatenate s2 to s1
 * Return: pointer to newly allocated space with concatenated info (Success),
 * NULL (Failure)
 **/

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len3;
	char *p;

	i = 0;
	j = 0;

	/* string empty if NULL is pased */

	if (s1 != NULL)
		len1 = _strlen(s1);
	else
		len1 = 0;
	if (s2 != NULL)
		len2 = _strlen(s2);
	else
		len2 = 0;

	len3 = len1 + len2 + 1; /*+1 to make an element at the end for '\0' */

	p = malloc(len3 * sizeof(char));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	if (len1 != 0)
	{
		for (i = 0; s1[i] != '\0'; i++)
			p[i] = s1[i];
	}
	if (len2 != 0)
	{
		for (j = 0; s2[j] != '\0'; i++, j++)
			p[i] = s2[j];
	}
	p[i] = '\0';

	return (p);
}
