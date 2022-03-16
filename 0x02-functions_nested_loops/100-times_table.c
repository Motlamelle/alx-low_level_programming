#include "main.h"
/**
 * print_times_table - writes a function that prints the n times table
 * @n: the n times table
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
					_putchar(j + '0');
				else if (j * i < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(j * i + '0');
				}
				else if (j * i < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((j * i) / 10 + '0');
					_putchar((j * i) % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((j * i) / 100 + '0');
					_putchar(((j * i) / 10) % 10 + '0');
					_putchar((j * i) % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
