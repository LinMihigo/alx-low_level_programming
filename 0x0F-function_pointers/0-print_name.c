#include "function_pointers.h"
/**
* print_name - prints a name
* @name: name to print
* @f: pointer to function that prints the name
* Return: Void
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	(*f)(name);
}
