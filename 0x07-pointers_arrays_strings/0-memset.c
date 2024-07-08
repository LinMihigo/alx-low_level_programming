#include "main.h"
/**
* _memset - copies memory area
* @s: pointer to memory to be altered
* @b: char to use to alter
* @n: number of times to alter
* Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
