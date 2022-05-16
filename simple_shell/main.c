#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	char *command;

	command = get_prompt();

	printf("%s\n", command);

	return (0);
}
