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

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
