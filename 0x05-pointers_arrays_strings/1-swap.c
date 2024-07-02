#include "main.h"
/**
* swap_int - func to update a pointer's value
* @a: pointer param
* @b: pointer param
* Return: 0
*/
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
