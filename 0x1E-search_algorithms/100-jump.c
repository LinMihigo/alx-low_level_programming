#include "search_algos.h"

/**
* jump_search - searches a value in a sorted array
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: print array being searched every time it changes
*/
int jump_search(int *array, size_t size, int value)
{
	int i, step = sqrt(size), prev = 0, upper_bound;
	size_t current = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (current < size && array[current] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", current, array[current]);
		prev = current;
		current += step;
	}
	printf("Value found between indexes [%d] and [%ld]\n", prev, current);
	if (current < size)
		upper_bound = current;
	else
		upper_bound = size - 1;

	for (i = prev; i <= upper_bound; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
