#include "main.h"
/**
* main - prints all arguments received
* @argc: num of arguments
* @argv: array of arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
