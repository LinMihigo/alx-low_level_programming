#include "search_algos.h"

/**
* binary_search - searches for a value in a sorted array of ints
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: print array being searched every time it changes
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid, left = 0, right = size - 1;

	if (!array || size == 0)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
