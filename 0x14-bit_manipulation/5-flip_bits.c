#include "main.h"
/**
 * flip_bits - num of bits needed to flip from one num to another
 * @n: num 1
 * @m: num 2
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_output = n ^ m;

	unsigned int count = 0;

	while (xor_output)
	{
		count += xor_output & 1;
		xor_output >>= 1;
	}

	return (count);
}
