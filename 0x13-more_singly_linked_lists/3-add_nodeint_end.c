#include "lists.h"
/**
* add_nodeint_end - adds a new node to the end of listint_t list
* @head: pointer to list head
* @n: num to add
* Return: add of new
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current = (*head);

	new = malloc(sizeof(listint_t));
	if (!new)
		return ('\0');

	new->n = n;
	new->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = new;
		return (new);
	}

	while (current->next)
		current = current->next;

	current->next = new;

	return (new);
}
