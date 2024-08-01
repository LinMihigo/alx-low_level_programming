#include "lists.h"
/**
* free_list - frees the list
* @head: pointer to the head node
* Return: void
*/
void free_list(list_t *head)
{
	list_t *list; 

	while (head != NULL)
	{
		list = head->next;
		free(list->str);
		free(head);
		head = list;
	}
}
