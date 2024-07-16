#include "main.h"
/**
* argstostr - concatenates args
* @ac: num of arguments
* @av: pointer to the pointer array of arguments passed to main
* Return: char pointer to concatenated string
*/
char *argstostr(int ac, char **av)
{
	char *ar;
	int i, j, k, l, m = 0, n = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (k = 0; *(av[i] + k) != '\0'; k++)
		{
			n++;
		}
		printf("n: %d, argv: %s\n", n, av[i]);
	}

	ar = malloc(sizeof(char) * (n + 1));

	printf("n: %d\n", n);
	printf("\n");

	if (ar == NULL)
		return (NULL);
	
	for (j = 0; j < ac; j++)
	{
		for (l = 0; *(av[j] + l) != '\0'; l++)
		{
			if (m < (n + ac))
			{
				ar[m] = *(av[j] + l);
				m++;
			}
		}
		ar[m] = '\n';
		m++;
		printf("j: %d, l: %d, m: %d, %c\n", j, l, m, ar[m]);
	}
	ar[n] = '\0';

	return (ar);
}
