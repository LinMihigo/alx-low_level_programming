#include "lists.h"

/**
* print_dlistint - prints all elements of a dlistint_t list
* @h: head of the doubly linked list
* Return: Number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		n++;
	}

	return (n);
}
