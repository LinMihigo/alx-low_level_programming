#include "main.h"
/**
* print_diagonal - func
* @n: param
* Return: 0
*/
void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		int j;

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
