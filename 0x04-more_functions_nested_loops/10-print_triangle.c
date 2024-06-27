#include "main.h"
#include <stdio.h>
/**
* print_triangle - func
* @size: param
* Return: 0
*/
void print_triangle(int size)
{
	int i = 0;

	while (i < size)
	{
		int j;

		for (j = 0; j < size; j++)
		{
			if (j < size - 1 - i)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
		i++;
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
