#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int S1 = 0;
	int S2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			S1 += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			S2 += a[i];
	}
	printf("%d, %d\n", S1, S2);
}
