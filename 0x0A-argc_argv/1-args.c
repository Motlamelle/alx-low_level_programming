#include <stdio.h>
#include "main.h"

/**
 * main - entry point, print the number of args passed to main
 * @argc: number of args passed to main
 * @argv: strings passed to main
 *
 * Return: (0) Success
 **/

int main(int argc, char *argv[]__attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", (argc - 1));
	}
	return (0);
}
