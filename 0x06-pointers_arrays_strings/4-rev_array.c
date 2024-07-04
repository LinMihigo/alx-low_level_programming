#include "main.h"
/**
* reverse_array - reverses an array of integers
*
* @a: arr param
* @n: param
*
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int b = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = b;
	}
}
