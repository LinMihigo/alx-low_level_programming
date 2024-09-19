#include "lists.h"
/**
* free_dlistint - frees list
* @head: head to list
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
