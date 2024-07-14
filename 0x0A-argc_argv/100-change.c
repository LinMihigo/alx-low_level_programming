#include "main.h"
/**
* main - prints min num of coins to make change for an amount of money
* @argc: num of arguments
* @argv: array of pointers to arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int num;
	int n = 0, i = 0;
	int arr[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		num = atoi(argv[1]);
	}

	while (i < 5) /* Catering for when num = 0 */
	{
		if (num - arr[i] >= 0)
		{
			num -= arr[i];
			n++;
			printf("i: %d, num: %d, arr[i]: %d\n", i, num, arr[i]);
		}
		else if (num - arr[i] < 0)
		{
			i++;
		}
	}

	printf("%d\n", n);

	return (0);
}
