#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: the encoded string;
 */
char *leet(char *s)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	while (s[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}

		i++;
	}

	return (s);
}
