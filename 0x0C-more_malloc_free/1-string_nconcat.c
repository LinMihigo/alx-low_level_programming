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
* string_nconcat - concatenates two strings
* @s1: first part of string to concatenate
* @s2: Second part.
* @n: concatenate second part till n
* Return: pointer to newly allocated space in memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, k, n1, n2, limit;

	char *ar;

	s1 = s1 ? s1 : "";
	s2 = s2 ? s2 : "";
	n1 = _strlen(s1);
	n2 = _strlen(s2);

	ar = malloc(sizeof(char) * (n1 + (n >= n2 ? n2 : n) + 1));
	if (!ar)
		return (NULL);

	for (j = 0; j < n1; j++)
	{
		ar[j] = s1[j];
	}

	limit = n >= n2 ? n2 : n;
	for (k = 0; k < limit; k++)
	{
		ar[n1 + k] = s2[k];
	}

	ar[n1 + limit] = '\0';

	return (ar);
}
