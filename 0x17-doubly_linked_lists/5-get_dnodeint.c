#include "lists.h"

/**
* get_dnodeint_at_index - get nth node in list
* @head: head of list
* @index: nth node index
* Return: address of nth node in list
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
