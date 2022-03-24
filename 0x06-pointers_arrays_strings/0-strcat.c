#include "main.h"

/**
 * *_strcat - concatenates two strings
 * appends src to desc
 * adds the terminating null byte
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
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

	len3 = len + len2;

	for (i = len2; i < len3; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
