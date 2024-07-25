#include "variadic_functions.h"
/**
* print_strings - returns digit length
* @separator: sep
* @n: num
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, j, k;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		for (k = 0; str[k] != '\0'; k++)
		{
			_putchar(str[k]);
		}
		if (separator != NULL && i < (n - 1))
		{
			for (j = 0; separator[j] != '\0'; j++)
			{
				_putchar(separator[j]);
			}
		}
	}
	_putchar('\n');
	va_end(args);
}
