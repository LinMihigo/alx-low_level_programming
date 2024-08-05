#include "lists.h"
/**
* add_nodeint - adds a new node at the beginning of a listint_t
* @head: double pointer to head of list
* @n: num to add to the head of the list.
* Return: Address of new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new)
		return (NULL);

	new->n = n;
	new->next = (*head);

	(*head) = new;

	return (new);
}
