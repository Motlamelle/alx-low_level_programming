#include <stdlib.h>
#include <stdio.h>

/**
 * main - print lowercase alphabets
 * using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
