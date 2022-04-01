#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints its name, followed by a new line
 * @argc: number of command lines,sizeof argv
 * @argv: contains the program command line
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
