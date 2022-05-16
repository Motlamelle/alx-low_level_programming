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

	printf("%s ", "$");
	command = getprompt();

	free(command);
	return (0);
}
