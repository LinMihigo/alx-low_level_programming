#include <stdio.h>
/**
* main - entry point
*
* Description: print unique combos of two two-digit numbers
*
* Return: 0 (Success)
*/
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; i < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if (i != k || j != l)
					{
						if (i < k || (i == k && l > j))
						{
							putchar('0' + i);
							putchar('0' + j);
							putchar(' ');
							putchar('0' + k);
							putchar('0' + l);

							if (i < 9 || j < 8 || k < 9 || l < 9)
							{
								putchar(',');
								putchar(' ');
							}
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
