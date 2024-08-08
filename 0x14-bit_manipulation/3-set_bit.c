#include "main.h"
#define MAX_BITS_ULONG_INT 64
/**
 * set_bit - set value of a bit to 1 at a given index
 * @n: pointer 
 * @index: index
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= MAX_BITS_ULONG_INT)
		return (-1);

	return ((n >> index) & 1);
}
