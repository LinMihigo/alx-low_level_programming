#include "main.h"
/**
* malloc_checked - returns pointer to allocated mem
* @b: mem size to be allocated
* Return: pointer or Null
*/
void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);

	if (pt == NULL)
		exit(98);

	return (pt);
}
