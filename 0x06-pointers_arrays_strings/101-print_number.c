#include "main.h"
/**
* print_number - prints an integer
* @n: integer n
* Return: 0
*/
void print_number(int n)
{
	char buf[12];

	sprintf(buf, "%d", n);
	write(1, buf, sizeof(buf));
}
