#include "lists.h"
/**
* pop_listint - adds a new node to the end of listint_t list
* @head: pointer to list head
* Return: data in the deleted node
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if ((*head) == NULL || head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;

	return (n);
}
