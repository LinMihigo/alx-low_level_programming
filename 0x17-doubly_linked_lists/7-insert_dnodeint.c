#include "lists.h"
/**
* insert_dnodeint_at_index - insert a new node at a posn idx
* @h: head of list
* @idx: posn to insert
* @n: new num to insert
* Return: address of new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *temp = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL || temp->next == NULL)
		return (NULL);

	new->next = temp->next;
	new->prev = temp;

	if (temp->next)
		temp->next->prev = new;

	temp->next = new;

	return (new);
}
