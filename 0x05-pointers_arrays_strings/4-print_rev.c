#include "main.h"
/**
* print_rev - func to print a string in reverse
* @s: pointer param
* Return: 0
*/
void print_rev(char *s)
{
	int strlen;

	for (strlen = 0; *(s + strlen) != '\0'; i++)
	;

	for (--strlen; strlen >= 0; --strlen)
	{
		_putchar(s[strlen]);
	}
	_putchar('\n');
}
