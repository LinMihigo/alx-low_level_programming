#include "main.h"
/**
* print_most_numbers - func
* Return: 0
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int n = '0' + i;

		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
