#include <stdio.h>
/**
* main - entry point
* printUniquePairs - function to print unique pairs
*
* Description: print unique combos of two two-digit numbers
*
* Return: 0 (Success)
*/
void printUniquePairs(void)
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

int main(void)
{
	printUniquePairs();
	return (0);
}
