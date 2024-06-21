#include <stdio.h>
#include <stdlib.h>
/**
  * main - a function that prints a string
  *
  * Description : A function that prints the alphabet without q and e
  *
  * Return: The alphabet except q and e
  */
int main(void)
{
	char c;
	int i = 0;

	while (i < 26)
	{
		c = 'a' + i;
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		i++;
	}

	putchar('\n');

	return (0);
}
