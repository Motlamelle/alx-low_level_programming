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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
