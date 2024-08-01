#include "lists.h"
/**
* free_list - frees the list
* @head: pointer to the head node
* Return: void
*/
void free_list(list_t *head)
{
	while(!head && head->next)
	{
		free(head->str);
	}
	free(head);
}
