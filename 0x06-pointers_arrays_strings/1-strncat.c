#include "main.h"
/**
* _strncat - prints n elements of an array of integers.
*
* @dest: elements parameter input
* @src: string parameter input
* @n: param
*
* Return: Nothing
*/
char *_strncat(char *dest, char *src, int n)
{
	int strlen;

	int i;

	for (strlen = 0; dest[strlen] != '\0'; strlen++)
	;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[strlen + i] = src[i];
	}
	dest[strlen + i] = '\0';

	return (dest);
}
