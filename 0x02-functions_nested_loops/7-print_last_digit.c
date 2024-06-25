#include "main.h"
/**
* print_last_digit - Starting point
* @n: params
* Return: 0
*/
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		x = (n % 10) * -1;
	}
	else
	{
		x = n % 10;
	}

	_putchar(x + '0');

	return (x);
}
