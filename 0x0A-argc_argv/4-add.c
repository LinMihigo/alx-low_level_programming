#include "main.h"
/**
* main - adds +ve nums
* @argc: argument count
* @argv: argument arr of char
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, z = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		{
			z += atoi(argv[i]);
		}
	}
	printf("%d\n", z);

	return (0);
}
