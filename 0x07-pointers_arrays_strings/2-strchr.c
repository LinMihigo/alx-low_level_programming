#include "main.h"
/**
* _strchr - locates a character in a string
* @s: pointer to string to be checked
* @c: character to look for
* Return: a pointer to first occurrence of c
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	if (s[0] == c)
	{
		return (s);
	}

	return ('\0');
}
