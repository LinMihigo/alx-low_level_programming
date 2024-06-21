#include <stdio.h>
/**
  * main - a function that prints a string
  *
  * Description : A function that prints the alphabet which is partially
  * in uppercase
  *
  * Return: The alphabet, partially uppercase
  */
int main(void)
{
	char c;
	char d;
	int i = 0;
	int j = 0;

	while (i < 26)
	{
		c = 'a' + i;
		putchar(c);
		i++;
	}

	while (j < 26)
	{
		d = 'A' + j;
		putchar(d);
		j++;
	}

	putchar('\n');

	return (0);
}
