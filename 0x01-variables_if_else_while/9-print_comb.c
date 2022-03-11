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
	int c;

	for (c = 0 ; c <= 9 ; c++)
	{	putchar(c % 10 + '0');
		if (c < 9)
		{	putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
