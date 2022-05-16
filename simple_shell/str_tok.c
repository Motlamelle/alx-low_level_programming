#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * split_line- splits a command line into strings
 * @str: input line
 *
 * Return: Array of strings
 */

char **split_line(char *str)
{
	int j, i = 0;
	int bufsize = 64;
	char *res;

	char **tokens = malloc(bufsize * sizeof(char *));

	/*get first token */
	tokens[i++] = strtok(str, " ");

	/*get all other tokens */
	while ((res = strtok(NULL, " ")))
	{
		tokens[i++] = res;
	}

	token[i] = NULL;

	/*print tokens */
	for (j = 0; j < i; j++)
		printf("%s\n", tokens[j]);

	return (tokens);
}
