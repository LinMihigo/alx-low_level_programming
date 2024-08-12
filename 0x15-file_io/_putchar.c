#include "main.h"
/**
 * _putchar - prints a char to STDOUT
 * @c: char to print
 * Return: output value of write()
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
