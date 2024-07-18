#include "main.h"
/**
* _calloc - allocates mem for an array using malloc
* @nmemb: num of array elements
* @size: byte size of each element
* Return: pointer to array's first element
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return ('\0');

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return ('\0');

	for (i = 0; i < (nmemb * size); i++)
	{
		arr[i] = 0;
	}

	return (arr);
}
