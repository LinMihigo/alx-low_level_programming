#include "function_pointers.h"
/**
* int_index - searches for an int
* @array: array of numbers
* @size: size of the array
* @cmp: function to execute
* Return: Void
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, n = 0;

	if (!array || !cmp)
		return;

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			n++;
			return (i);
		}
	}

	if (size <= 0 || n == 0)
		return (-1);
}
