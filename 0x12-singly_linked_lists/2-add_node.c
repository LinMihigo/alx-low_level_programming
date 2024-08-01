#include "lists.h"
/**
* add_node - add new node
* @head: head of node (current)
* @str: str to add to new node
* Return: Add of new head node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;

	new = malloc(sizeof(list_t));
	if (!new)
		return ('\0');

	new->str = strdup(str);
	new->len = i++;
	new->next = (*head);

	(*head) = new;

	return (new);
}
