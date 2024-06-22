#include <stdio.h>
/**
  * main - entry point
  *
  * Description: print 0 - 9
  *
  * Return: 0 (Success)
  */
int main(void)
{
	int n;
	int i = 0;

	while (i < 10)
	{
		n = '0' + i;
		putchar(n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	putchar('\n');

	return (0);
}
