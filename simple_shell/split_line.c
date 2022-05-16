#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char *str = NULL;
	char **newstring = malloc(sizeof(char *) * 64);
	unsigned int i, ctr;
	int j;

	printf("Input a string: ");
	fgets(str, sizeof(str), stdin);


	j = 0;
	ctr = 0;

	for (i = 0; i <= strlen(str); i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			newstring[ctr][j] = '\0';
			ctr++;
			j = 0;
		}
		else
		{
			newstring[ctr][j] = str[i];
			j++;
		}
	}

	for (i = 0; i < ctr; i++)
		printf("%s\n", newstring[i]);

	free(newstring);
	return (0);

}
