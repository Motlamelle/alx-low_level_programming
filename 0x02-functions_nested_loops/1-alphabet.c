#include "main.h"
/**
 * print_alphabet - entry point for the program
 * Description: Prints alphabets on lowercase
 * to the stdout
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
