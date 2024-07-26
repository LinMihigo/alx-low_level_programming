#include "function_pointers.h"
/**
* main - prints its own opcode
* @argc: num of arguments
* @argv: arr of arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int num, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;
	for (i = 0; i < num; ++i)
	{
		printf("%02hhx%s", arr[i], i == (num - 1) ? "\n" : " ");
	}

	return (0);
}
