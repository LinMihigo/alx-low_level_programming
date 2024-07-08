#include "main.h"
/**
* _strspn - gets the length of a prefix substring
* @s: pointer to string to be checked
* @accept: characters to look up
* Return: no. of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	unsigned int found = 1;

	while (s[i] != '\0')
	{
		found = 1;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 0;
				break;
			}
		}

		if (found)
		{
			break;
		}

		i++;
	}

	return (i);
}

