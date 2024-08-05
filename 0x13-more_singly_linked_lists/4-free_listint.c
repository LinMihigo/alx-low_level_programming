#include "lists.h"
/**
* free_listint - frees listint_t list
* @head: pointer to list head
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *next;

	while (!head)
	{
		next = head->next;
		free(current);
		head = next;
	}
}
