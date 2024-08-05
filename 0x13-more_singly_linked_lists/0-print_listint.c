#include "lists.h"
/**
* print_listint - prints all elements of listint_t list
* @h: pointer to the head node of the list
* Return: number of node
*/
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%")
		n++;
		h = h->next;
	}

	return (n);
}
