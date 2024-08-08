#include "main.h"
#include "limits.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: num
 * @index: index
 * Return: an int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * CHAR_BIT)
		return (-1);

	return ((n >> index) & 1);
}
