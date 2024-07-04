#include "main.h"
/**
 * _strncpy - copies a string from one pointer to another
 *	including the terminating null byte (\0)
 *
 * @src: source of string parameter input
 * @dest: destination of string
 * @n: param
 *
 * Return: pointer to dest input parameter
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a, b = 0;

	for (a = 0; a < n && src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}
