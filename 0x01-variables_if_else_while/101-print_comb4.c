#include <stdio.h>
/**
* main - entry point
*
* Description: print unique combos of three digits
*
* Return: 0 (Success)
*/
int main(void)
{
	int x;

	int y;

	int z;

	int i = 0;

	while (i < 10)
	{
		int j = i + 1;

		while (j < 10)
		{
			int k = j + 1;

			while (k < 10)
			{
				x = '0' + i;
				y = '0' + j;
				z = '0' + k;
				putchar(x);
				putchar(y);
				putchar(z);

				if (i < 7 || j < 8 || k < 9)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}

	putchar('\n');

	return (0);
}
