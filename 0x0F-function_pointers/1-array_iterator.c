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
	size_t i = 0;

	if (!action || !array)
		return;

	while (i++ < size)
	{
		(*action)(array[i]);
	}
}
