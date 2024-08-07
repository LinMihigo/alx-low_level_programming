#include "lists.h"
/**
* reverse_listint - reverses a listint_t list
* @head: pointer to list's head node
* Return: pointer to the first node of reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev.
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
