#include "main.h"
/**
 * _atoi - func
 *	including the terminating null byte (\0)
 * @s: param
 * Return: An integer
*/
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (*s != '\0' && (*s < '0' || *s > '9'))
		{
			num = 0;
			break;
		}
	} while (*s++);

	return (num * sign);
}

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
		if (_atoi(argv[i]) == 0)
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		{
			z += _atoi(argv[i]);
		}
	}
	printf("%d\n", z);

	return (0);
}
