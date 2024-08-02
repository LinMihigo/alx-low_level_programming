#include "lists.h"
/**
* free_list - frees the list
* @head: pointer to the head node
* Return: void
*/
void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL && current->next != NULL)
	{
		free(current->str);
		free(current);
		free_list(current->next);
	}
}
