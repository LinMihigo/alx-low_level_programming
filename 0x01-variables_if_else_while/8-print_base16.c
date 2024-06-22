#include <stdio.h>
/**
  * main - a function that prints a string
  *
  * Description: Have you read the red rising series? Darrow O'lykkos
  * Return: riri
  */
int main(void)
{
	int x;
	int y;
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		x = '0' + i;
		putchar(x);
		i++;
	}

	while (j < 6)
	{
		y = 'a' + j;
		putchar(y);
		j++;
	}

	putchar('\n');

	return (0);
}
