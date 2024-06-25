#include "main.h"
/**
* times_table - Starting point
* Return: 0
*/
void times_table(void)
{
		int i;
		int j;
		int k;

		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < 10; j++)
			{
				k = i * j;

				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
				}

				if (k > 9)
				{
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (j > 0)
				{
					_putchar(' ');
					_putchar(k + '0');
				}
				else
				{
					_putchar(k + '0');
				}
			}
			_putchar('\n');
		}
}
