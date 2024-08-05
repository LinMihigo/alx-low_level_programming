#include "lists.h"
/**
* free_listint - frees listint_t list
* @head: pointer to list head
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;

	while (!current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
