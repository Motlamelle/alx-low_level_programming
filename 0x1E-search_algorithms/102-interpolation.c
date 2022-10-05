#include "search_algos.h"
/**
* interpolation_search - searches for a value in a sorted array of integers
* using the Interpolation search algorithm
*
* @array: Pointer to the beginning of an array
* @size: The size of the array
* @value: value to search for
*
* Return: Nothing
*/
int interpolation_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (interpolation_recur(array, 0, size - 1, value));
}
/**
* interpolation_recur - searches for a value in a sorted array recursively
* using the Interpolation search algorithm
*
* @array: Pointer to the beginning of an array
* @start: starting index
* @end: ending index
* @value: value to search for
*
* Return: Nothing
*/
int interpolation_recur(int *array, size_t start, size_t end, int value)
{
	size_t position;

	position = start + (((double)(end - start) /
			     (array[end] - array[start]))
			  * (value - array[start]));

	if (position > end)
	{
		printf("Value checked array[%lu] is out of range\n", position);
		return (-1);
	}

	printf("Value checked array[%lu] = [%i]\n", position, array[position]);

	if (array[position] == value)
		return (position);

	if (start == end)
		return (-1);

	if (array[position] < value)
		return (interpolation_recur(array, position + 1, end, value));
	else
		return (interpolation_recur(array, start, position - 1, value));
}
