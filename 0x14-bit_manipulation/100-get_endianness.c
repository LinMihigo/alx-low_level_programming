#include "main.h"
/**
 * get_endianness - checks for endianness
 * Return: 0 - big endianness | 1 - little endianness
 */
int get_endianness(void)
{
	unsigned int test = 1;

	char *byte = (char *)&test;

	return ((byte[0] == 1) ? 1 : 0);
}
