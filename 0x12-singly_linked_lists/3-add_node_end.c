#include "lists.h"
/**
* add_node_end - adds a new node at the end of the list
* @head: new node
* @str: str to use to add new data to node
* Return: address of new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *list = (*head);

	unsigned int i = 0;

	while (str[i] != '\0')
		i++;

	new = malloc(sizeof(list_t));
	if (!new)
		return ('\0');

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		(*head) = new;
		return (new);
	}

	while (list->next != NULL)
		list = list->next;

	list->next = new;

	return (new);
}
