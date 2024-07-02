#include "main.h"
/**
* print_rev - func to print a string in reverse
* @s: pointer param
* Return: 0
*/
void print_rev(char *s)
{
	int i = 0;
	int strlen;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		strlen = i;
	}

	while (strlen >= 0)
	{
		_putchar(*(s + strlen));
		strlen--;
	}
	_putchar('\n');
}
