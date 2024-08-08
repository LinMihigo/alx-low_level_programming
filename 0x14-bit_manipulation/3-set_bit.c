#include "main.h"
/**
 * set_bit - set value of a bit to 1 at a given index
 * @n: pointer 
 * @index: index
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	return ((n >> index) & 1);
}
