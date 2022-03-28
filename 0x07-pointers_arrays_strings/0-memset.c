#include "main.h"

/**
 * _memset - fills the first n bytes of s
 * @s :statring address of memory to be filled
 * @b : desired constant byte
 * @n : number of bytes to be filled
 * Return: pointer to the memory area
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
