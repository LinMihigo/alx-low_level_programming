#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string to convert
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);

	while (*b != '\0')
	{
		if (*b != '\0' && *b != '1')
			return (0);

		result = (result << 1) + (*b - '0');
		b++;
	}
	return (result);
}
