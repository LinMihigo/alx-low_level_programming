#include "main.h"
/**
* array_range - creates an array of integers
* @min: min value
* @max: max value
* Return: pointer to int array
*/
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int len = max - min;

	if (min > max)
		return ('\0');

	arr = malloc(sizeof(int) * (len + 1));
	if (arr == NULL)
		return ('\0');

	for (i = 0; min <= max; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
