#include <stdio.h>
/**
* main - entry point
*
* Description: print unique combos of two digits
*
* Return: 0 (Success)
*/
int main(void)
{
	int x;
	int y;
	int i = 0;

	while (i < 10)
	{
		int j = i + 1;

		while (j < 10)
		{
			x = '0' + i;
			y = '0' + j;

			if (i != j && i < 8 && j < 9)
			{
				putchar(x);
				putchar(y);
				putchar(',');
				putchar(' ');
			}
			if (i == 8 && j == 9)
			{
				putchar(x);
				putchar(y);
			}
			++j;
		}
		i++;
	}

	putchar('\n');

	return (0);
}
