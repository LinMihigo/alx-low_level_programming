#include <stdio.h>
/**
  * main - why is main used so much?
  *
  * Description: A
  *
  * Return: B
  */
int main(void)
{
	char c;
	int i = 0;

	while (i < 26)
	{
		c = 'z' - i;
		putchar(c);
		i++;
	}

	putchar('\n');

	return (0);
}
