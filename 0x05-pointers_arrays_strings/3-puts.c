#include "main.h"
/**
* _puts - func to return length of a string
* @str: pointer param
* Return: 0
*/
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
