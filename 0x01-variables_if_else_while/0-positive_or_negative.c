#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - A function that prints a string
  *
  * Description: If statement to check if n is positve, negative
  * or just zero
  * Return: A string stating whether n is +ve, -ve, or 0
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is positive", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}
