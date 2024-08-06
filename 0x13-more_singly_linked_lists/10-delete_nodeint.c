#include "lists.h"
/**
* delete_nodeint_at_index - deletes the node at index in a linked list
* @head: pointer to list pointer
* @index: posn of elem to delete
* Return: 1 if succeeded
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (!head || !((*head)))
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	for (i = 0; i < index - 1 && current->next; i++)
		current = current->next;

	if (!current->next)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
