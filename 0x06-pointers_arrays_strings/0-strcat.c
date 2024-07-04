#include "main.h"
/**
* _strcat - prints n elements of an array of integers.
*
* @dest: elements parameter input
* @src: string parameter input
*
* Return: Nothing
*/
char *_strcat(char *dest, char *src)
{
	int strlen;

	int i;

	for (strlen = 0; dest[strlen] != '\0'; strlen++)
	;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[strlen + 1 + i] = src[i];
	}

	return (dest);
}
