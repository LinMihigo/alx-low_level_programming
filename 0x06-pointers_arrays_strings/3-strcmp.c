#include "main.h"
/**
* _strcmp - compares two strings
* @s1: 1st string
* @s2: 2nd string
* Return: integer
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	int x;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
	{
		x = s1[i] - s2[i];
		break;
	}
	else
	{
		x = s1[i] - s2[i];
	}
	}

	return (x);
}
