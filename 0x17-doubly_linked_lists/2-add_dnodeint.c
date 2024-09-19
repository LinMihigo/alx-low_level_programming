#include "lists.h"
/**
* add_dnodeint - add a new node at the beginning of list
* @head: pointer to the head of the list
* @n: num to add to the list
* Return: address of new element as head of the list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last;
	dlistint_t *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return NULL;
	new->n = n;
	if (current)
	{
		current->prev = new;
		new->next = current;
		new->prev = last;
	}

	return (new);
}
