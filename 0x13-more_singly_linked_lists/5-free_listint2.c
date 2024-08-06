#include "lists.h"
/**
* free_listint2 - frees a linked list
* @head: pointer to list head
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head)
		return;

	while ((*head))
	{
		current = (*head)->next;
		free((*head));
		(*head) = current;
	}

	(*head) = NULL;
}
