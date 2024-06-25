#include "main.h"
/**
* print_alphabet_x10 - Starting point
* Description: Prints the alphabet 10x
* Return: 0
*/
int print_alphabet_x10(void)
{
	int c;
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 0; i < 26; i++)
		{
			c = 'a' + i;
			_putchar(c);
		}
		_putchar('\n');
		j++;
	}
	return (0);
}
