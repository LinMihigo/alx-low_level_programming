#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	size_t i;
	char *str;

	va_start(args, format);
	for (i = 0; format[i]; ++i)
	{
		switch (format[i])
		{
			case 'c':
			{
				printf("%s%c", i > 0 ? ", " : "", va_arg(args, int));
				break;
			}
			case 'i':
			{
				printf("%s%d", i > 0 ? ", " : "", va_arg(args, int));
				break;
			}
			case 'f':
			{
				printf("%s%f", i > 0 ? ", " : "", va_arg(args, double));
				break;
			}
			case 's':
			{
				str = va_arg(args, char*);

				if (!str)
					str = "(nil)";

				printf("%s%s", i > 0 ? ", " : "", str);
				break;
			}
			default:
				continue;
		}
	}
	printf("\n");
	va_end(args);
}
