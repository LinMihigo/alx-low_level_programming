#include "main.h"
/**
* create_array - creates an array of chars and init. with c
* @c: char c
* @size: size of array
* Return: char pointer
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return ('\0');

	if (size == 0)
		return ('\0');

	while (i < size)
	{
		if (i == size - 1)
			ar[i] = '\0';

		ar[i] = c;
		i++;
	}

	return (ar);
}
