#include <stdio.h>
/**
  * main - a function that prints a string
  *
  * Description : A function that prints the alphabet
  *
  * Return: a letter of the alpabet
  */
int main(void)
{
	char c;
	int i = 0;

	while (i < 26)
	{
		c = 'a' + i;
		putchar(c);
		i++;
	}

	putchar('\n');

	return (0);
}
