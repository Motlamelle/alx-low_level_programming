#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: Always 0.
 *
 */

int main()
{
	char *command;
	char **args;
	int i = 0;

	command = get_prompt();
	args = split_line(command);

	while (args[i])
	{
		printf("%s", args[i]);
		i++;
	}

	i = exit_shell();
	printf("%d", i);

	return (0);
}
