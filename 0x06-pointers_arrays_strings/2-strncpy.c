#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * @n: number of bytes to copy from src
 *
 * Return: the pointer to resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len, len2, i;

	len = 0;
	len2 = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	while (dest[len2] != '\0')
	{
		len2++;
	}

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
