#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of args passed into it
 * @argc: number of command lines,sizeof argv
 * @argv: contains the program command line
 * Return: 0
 */
int main(int argc, char *argv[])
{

if (argc)
{
	printf("%d\n", argc-1);
	(void)argv;
}
return (0);
}
