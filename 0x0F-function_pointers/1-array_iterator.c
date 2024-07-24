#include "function_pointers.h"
/**
* array_iterator - executes each element in the pointers to func arrays
* @array: array of numbers
* @size: size of the array
* @action: function to execute
* Return: Void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || !array)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
