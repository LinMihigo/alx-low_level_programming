#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 *
 * @s: string input
 *
 * Return: @s
*/
char *leet(char *s)
{
	int i = 0;
	char *targets = "aeotlAEOTL";
	char *replacements = "4307143071";

	while (s[i] != '\0')
	{
		for (int j = 0; j < 10; j += 2)
		{
			if (s[i] == targets[j] || s[i] == targets[j + 1])
			{
				s[i] = replacements[j / 2];
				break;
			}
		}
		i++;
	}
	return (s);
}
