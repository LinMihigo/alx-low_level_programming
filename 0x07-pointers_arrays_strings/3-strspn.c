#include "main.h"
/**
* _strspn - gets the length of a prefix substring
* @s: pointer to string to be checked
* @accept: characters to look up
* Return: no. of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (j = 0; accept[j] != '\0'; j++)
	{
		for (i = 0; s[i] == accept[j]; ++i)
		{
			i > j ? j = ++i : j;
		}
	}

	return (j + 1);
}
