#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * that contains min and man and ordered
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to newly created array (SUCCESS)
 *         NULL (FAILURE)
 **/

int *array_range(int min, int max)
{
	int arr, num, i, *ptr;

	if (min > max)
		return (NULL);

	arr = (max - min) + 1;

	ptr = malloc(sizeof(int) * arr);

	if (ptr == NULL)
		return (NULL);

	else
	{
		for (i = 0, num = min; i < arr; i++, num++)
			ptr[i] = num;
	}
	return (ptr);
}
