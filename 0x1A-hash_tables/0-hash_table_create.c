#include "hash_tables.h"
/**
* hash_table_create - creates a hash table
* @size: size of the hash table
* Return: pointer to newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (!table)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}

/**
* free_node - free memory allocated in nodes
* @node: node to free
*/
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
* free_table - Free memory created by creatin a table
* @table: the hash table
*/
void free_table(hash_table_t *table)
{
	unsigned long int i;

	for (i = 0; i < table->size; i++)
	{
		hash_node_t *node = table->array[i];

		if (!node)
			free_node(node);
	}
	free(table->array);
	free(table);
}
