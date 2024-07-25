#include "3-calc.h"
/**
* main - main func
* @argc: num of arguments
* @argv: arguments arr
* Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]), num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL && strlen(argv[2]) != 1)
	{
		printf("%s\n", "Error");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}

	printf("%d\n", get_op_func(argv[2])(num1, num2));

	return (0);
}
