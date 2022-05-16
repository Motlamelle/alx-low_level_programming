#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_prompt- read a command from std input
 *
 * Return: the command
 */

char *get_prompt(void)
{
	char *buf;
	size_t size = 64;

	buf = malloc(sizeof(char) * size);

	printf("$ ");
	getline(&buf, &size, stdin);

	return (buf);
}
