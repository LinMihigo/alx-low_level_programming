#include "lists.h"
/**
* sum_dlistint - sum of all the data in the lsit
* @head: head of the list
* Return: sum - data in list
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
