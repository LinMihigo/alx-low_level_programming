#include "lists.h"
/**
* list_len - returns the number of elements in the linked list
* @h: pointer to the header node
* Return: the number of elements in the list
*/
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}
