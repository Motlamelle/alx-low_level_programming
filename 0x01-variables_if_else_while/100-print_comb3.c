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
	int d;

	for (c = 0 ; c < 9 ; c++)
	{
		d = c + 1;
		for ( ; d <= 9 ; d++)
		{
			putchar(c % 10 + '0');
			putchar(d % 10 + '0');

			if (c < 8 || d < 9)
			{
				putchar(',');
				putchar(' ');

			}
		}


	}

	return (0);
}
