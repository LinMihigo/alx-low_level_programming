#include "main.h"
/**
* string_count - count num of words in string
* @str: string
* Return: num of words
*/
int string_count(char *str)
{
	int i, strcount = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if ((str[i + 1] == ' ') || (str[i + 1] == '\0'))
			{
				strcount++;
			}
		}
	}
	return (strcount);
}
/**
* strtow - splits into words
* @str: string to be split
* Return: char pointer
*/
char **strtow(char *str)
{
	char **arr;
	int i = 0, j = 0, len = 0, idx = 0;

	if (str == NULL || strcmp(str, "                ") == 0)
		return (NULL);

	arr = malloc(sizeof(char *) * (string_count(str) + 1));

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ') /* Skip spaces */
		{
			i++;
			continue;
		}

		len = 0;
		while (str[i] != ' ' && str[i] != '\0')
		{
			len++; /* Count characters in current word */
			i++;
		}

		arr[j] = malloc(sizeof(char) * (len + 1));
		arr[j][len] = '\0';
		idx = 0;
		i -= len;
		while (idx < len)
		{
			arr[j][idx] = str[i];
			idx++;
			i++;
		}

		j++;
	}
	arr[j] = NULL;
	return (arr);
}
