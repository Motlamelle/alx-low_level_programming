#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main- entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int j, i = 0;
	char str[80] = "hello world";
	char *res;
	char *tokens[20];

	/*get first token */
	tokens[i++] = strtok(str, " ");

	/*get all other tokens */
	while ((res = strtok(NULL, " ")))
	{
		tokens[i++] = res;
	}
	
	token [i] = NULL;

	/*print tokens */
	for (j = 0; j < i; j++)
		printf("%s\n", tokens[j]);

	return (0);
}
