#include "main.h"
/**
* rev_string - func to print a string in reverse
* @s: pointer param
* Return: 0
*/
void rev_string(char *s)
{
	int i;
	int strlen = 0;
	char *a;

	for (; *(s + strlen)  != '\0'; strlen++)
	;

	a = (char *)malloc((strlen + 1) * sizeof(char));
	if (a == NULL)
	{
		return;
	}

	for (i = 0; i <= strlen; i++)
	{
		*(a + i) = *(s + i);
	}

	for (i = 0; i <= strlen; i++)
	{
		s[i] = a[strlen - i - 1];
	}

	free(a);
}
