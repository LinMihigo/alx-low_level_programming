#include "main.h"
/**
* alloc_grid - creates a pointer to a 2D array of ints
* @width: width of the array
* @height: its height
* Return: a pointer to the first value of the array
*/
int **alloc_grid(int width, int height)
{
	int **ar, i, j;

	if (width <= 0 || height <= 0)
		return ('\0');

	ar  = (int **)malloc(sizeof(int *) * height);

	if (ar == NULL)
		return ('\0');

	for (i = 0; i < height; i++)
	{
		ar[i] = (int *)malloc(sizeof(int) * width);

		if (ar[i] == NULL) /* free memory allocated when allocation fails*/
		{
			while (i >= 0)
			{
				free(ar[i]);
				i--;
			}
			free(ar);
			return ('\0');
		}

		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}

	return (ar);
}
