#include <stdio.h>
#include "main.h"
/**
* print_to_98 - check the code
* @n: param
* Return: Always 0.
*/
void print_to_98(int n)
{
	int start = n;
	int end = 98;

	if (n <= 98)
	{
		while (start <= end)
		{
			printf("%d", start);
			if (start != end)
			{
				printf(", ");
			}
			start++;
		}
	}
	else
	{
		while (start >= end)
		{
			printf("%d", start);
			if (start != end)
			{
				printf(", ");
			}
			start--;
		}
	}
	printf("\n");
}
