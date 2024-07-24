#include "3-calc.h"
/**
* main - main func
* @argc: num of arguments
* @argv: arguments arr
* Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	int res, num1 = atoi(argv[1]), num2 = atoi(argv[3]);
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	f = get_op_func(argv[2]);
	if (!f)
	{
		printf("%s\n", "Error");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}

	res = f(num1, num2);

	printf("%d\n", res);

	return (0);
}
