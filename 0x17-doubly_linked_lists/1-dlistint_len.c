#include "lists.h"

/**
* dlistint_len - returns the number of elements in a linked list
* @h: head of the list
* Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		n++;
	}

	return (n);
}
