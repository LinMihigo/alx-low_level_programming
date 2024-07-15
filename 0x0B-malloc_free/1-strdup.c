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
* _strdup - return a pointer to a newly allocated space in memory
* @str: string copied to the newly allocated memory space
* Return: pointer to char
*/
char *_strdup(char *str)
{
	int j = 0;
	int n;
	char *ar;

	if (str == NULL)
		return ('\0');

	n = _strlen(str) + 1; /* Adding 1 coz _strlen checks till \0 */
	ar = malloc(sizeof(char) * n);

	if (ar == NULL)
		return ('\0');

	while (j < n && *(str + j) != '\0')
	{
		ar[j] = str[j];
		j++;
	}
	ar[n - 1] = '\0';

	return (ar);
}
