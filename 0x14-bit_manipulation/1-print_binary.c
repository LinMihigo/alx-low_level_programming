#include "main.h"
/**
 * print_binary - print binary to stdout
 * @n: num to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (!n)
	{
		_putchar('0');
		return;
	}

	if ((n >> 1) == 0)
	{
		_putchar((n & 1) ? '1' : '0');
		return;
	}

	print_binary(n >> 1);
	_putchar((n & 1) ? '1' : '0';
}
