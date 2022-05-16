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
	char *buf;
	size_t size = 64;

	buf = malloc(sizeof(char) * size);

	printf("$ ");
	getline(&buf, &size, stdin);

	printf("%s", buf);

	free(buf);
	return (0);
}
