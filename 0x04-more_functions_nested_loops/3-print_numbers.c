#include "main.h"
/**
* print_numbers - func
* Return: 0
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int n = '0' + i;

		_putchar(n);
	}
	_putchar('\n');
}
