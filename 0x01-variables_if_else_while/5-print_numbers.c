#include <stdlib.h>
#include <stdio.h>

/**
 * main - print all single digit numbers
 * base 10 using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
		printf("%d", num);
	printf("\n");

	return (0);
}
