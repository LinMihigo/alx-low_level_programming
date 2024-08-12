#include "main.h"
/**
 * num_len - length of num
 * @num: num
 * Return: len
 */
int num_len(int num)
{
	int n = 1;

	while (num > 9)
	{
		n++;
		num /= 10;
	}
	return (n);
}

/**
 * print_nums - print the num
 * @num: the num
 * Return: void
 */
void print_nums(int num)
{
	if (num > 9)
	{
		print_nums(num / 10);
		_putchar((num % 10) + '0');
	}
	else
	{
		_putchar(num + '0');
	}
}

/**
 * print_times_table - prints n times table
 * @n: num of times
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = 4;

				if (j > 0)
					_putchar(',');
				while (j > 0 && (k - num_len(j * i)) > 0)
				{
					_putchar(' ');
					k--;
				}
				print_nums(j * i);
			}
			_putchar('\n');
		}
	}
}
