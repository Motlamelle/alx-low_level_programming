#include "main.h"

/**
 * *_strncat - concatenates two strings
 * appends src to desc with at most n bytes
 * adds the terminating null byte
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * @n: number of bytes to be appended from src
 *
 * Return: the pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, len2, len3, i, j;

	len = 0;
	len2 = 0;
	j = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	while (dest[len2] != '\0')
	{
		len2++;
	}

	if (n <= len)
	{
		len3 = len2 + n;
	}
	else
	{
		len3 = len2 + len;
	}

	for (i = len2; i < len3; i++)
	{
		dest[i] = src[j];
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
