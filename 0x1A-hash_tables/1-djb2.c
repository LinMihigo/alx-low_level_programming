#include "hash_tables.h"
/**
* hash_djb2 - func implementing the djb2 algo
* @str: string to be processed
* Return: the hash
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
