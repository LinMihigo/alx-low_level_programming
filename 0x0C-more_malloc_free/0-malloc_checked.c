#include "main.h"
/**
* malloc_checked - returns pointer to allocated mem
* @b: mem size to be allocated
* Return: pointer or Null
*/
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
	{
		exit(98);
	}
	else
	{
		return (malloc(b));
	}
}
