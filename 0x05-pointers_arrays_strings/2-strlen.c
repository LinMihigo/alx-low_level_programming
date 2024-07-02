#include "main.h"
/**
* _strlen - func to return length of a string
* @s: pointer param
* Return: 0
*/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
