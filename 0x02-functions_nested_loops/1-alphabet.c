#include "main.h"
/**
* print_alphabet - Starting point
* Description: Prints the alphabet
* Return: 0
*/
void print_alphabet(void)
{
	int c;
	int i;

	for (i = 0; i < 26, i++)
	{
		c = 'a' + i;
		_putchar(c)
	}
	_putchar('\n');
	return (0);
}
