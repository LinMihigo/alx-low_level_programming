#include <stdio.h>
/**
  * main - A function
  *
  * Description: I swear i can't stand these comments
  *
  * Return: A string
  */
int main(void)
{
	int c;
	int i = 0;

	while (i < 10)
	{
		c = '0' + i;
		putchar(c);
		i++;
	}

	putchar('\n');

	return (0);
}
