#include "main.h"
/**
* print_square - func
* @size: param
* Return: 0
*/
void print_square(int size)
{
	int i = 0;

	while (i < size)
	{
		int j;

		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		i++;
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
