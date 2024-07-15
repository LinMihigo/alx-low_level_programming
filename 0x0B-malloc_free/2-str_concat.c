#include "main.h"
/**
* _strlen - returns length of a string
* @str: string
* Return: int
*/
int _strlen(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
* str_concat - concatenates two strings
* @s1: first part of string to concatenate
* @s2: Second part.
* Return: pointer to newly allocated space in memory
*/
char *str_concat(char *s1, char *s2)
{
	int j, k, n1, n2;

	char *ar;

	if (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";
	}

	n1 = _strlen(s1);
	n2 = _strlen(s2);
	/* Adding 1 coz _strlen checks till \0 */
	ar = malloc(sizeof(char) * (n1 + n2 + 1));

	if (ar == NULL)
		return ('\0');

	for (j = 0; j < n1 && *(s1 + j) != '\0'; j++)
	{
		ar[j] = s1[j];
	}

	for (k = 0; k < n2 && *(s2 + k) != '\0'; k++)
	{
		ar[n1 + k] = s2[k];
	}

	ar[n1 + n2] = '\0';

	return (ar);
}
