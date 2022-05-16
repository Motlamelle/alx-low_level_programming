#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * main- entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int bufsize = 1024;
	int i = 0;
	char *buffer = malloc(sizeof(char) * bufsize);
	int c;

	printf("%s ", "$");

	if (!buffer)
	{
		fprintf(stderr, "lsh: allocation error\n");
		exit(1);
	}

	while (1)
	{
		c = getchar();

		if (c == EOF || c == '\n')
		{
			buffer[i] = '\0';
			printf("%s", buffer);
			return (0);
		}
		else
		{
			buffer[i] = c;
		}
		i++;
	}
}

