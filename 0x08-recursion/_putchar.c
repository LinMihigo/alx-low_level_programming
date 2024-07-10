#include "main.h"
#include <unistd.h>

/**
* _putchar - Entry point
* @c: c is the param passed to func _putchar()
* Description: prints string
* Return: 0 (Success)
*/
void _putchar(char c)
{
	write(1, &c, 1);
}
