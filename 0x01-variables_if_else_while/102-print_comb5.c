#include <stdio.h>

/**
* if_function - function to reduce indentation level
*
* @i: First digit
* @j: Second digit
* @k: Third digit
* @l: Fourth digit
*
* Prints a unique pair of two two-digit numbers.
*/
void if_function(int i, int j, int k, int l)
{
	if ((i != k || j != l) && (i < k || (i == k && l > j)))
	{
		putchar('0' + i);
		putchar('0' + j);
		putchar(' ');
		putchar('0' + k);
		putchar('0' + l);
		if (!(i == 9 && j == 8 && k == 9 && l == 9))
		{
			putchar(',');
			putchar(' ');
		}
	}
}

/**
* print_unique_pairs - Function to print unique pairs
*
* Description: Print all unique combinations of two two-digit numbers.
*
* Return: 0
*/
void print_unique_pairs(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{
			int k = 0;

			while (k < 10)
			{
				int l = 0;

				while (l < 10)
				{
					if_function(i, j, k, l);
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
}

/**
* main - Entry point
*
* Description: Print unique combinations of two two-digit numbers.
*
* Return: 0 (Success)
*/
int main(void)
{
	print_unique_pairs();
	return (0);
}
