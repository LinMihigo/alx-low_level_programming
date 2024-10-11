#include "hash_tables.h"
/**
* key_index - gives the index of a key
* @key: the key to process
* @size: size of the array nodes are stored in
* Return: the index of the key in the array
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int idx = hash_djb2(key);
    hash_node_t *node;

    node = malloc(sizeof(hash_node_t));
    if (!node)
        exit(EXIT_FAILURE);
    node->key = malloc()

}
