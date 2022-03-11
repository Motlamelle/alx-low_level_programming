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

	for (c = 'a' ; c <= 'z' ; c++)
		if ((c != 'e') && (c != 'q'))
			putchar(c);
	putchar('\n');
	return (0);
}
