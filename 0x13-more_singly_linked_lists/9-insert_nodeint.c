#include "lists.h"
/**
* insert_nodeint_at_index - insert new node at idx
* @head: pointer to list pointer
* @idx: index to insert new node
* @n: data to insert
* Return: address of new node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return ('\0');
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	for (i = 0; i < idx - 1 && current; i++)
		current = current->next;

	if (!current)
	{
		free(new_node);
		return ('\0');
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
