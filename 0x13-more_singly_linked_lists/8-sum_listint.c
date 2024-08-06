#include "lists.h"
/**
* sum_listint - sum of all the data(n) in the linked list
* @head: pointer to the list
* Return: sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
