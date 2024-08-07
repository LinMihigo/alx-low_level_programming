#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t count = 0;

	if (head == NULL)
		return (0);

	tortoise = hare = head;

	while (hare && hare->next)
	{
		printf("[%p] %d\n", tortoise, tortoise->n);
		count++;

		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			printf("[%p] %d\n", tortoise, tortoise->n);
			count++;
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				printf("[%p] %d\n", tortoise, tortoise->n);
				count++;
				tortoise = tortoise->next;
			}
			printf("-> [%p] %d\n", tortoise, tortoise->n);
			return (count);
		}
	}

	while (tortoise)
	{
		printf("[%p] %d\n", tortoise, tortoise->n);
		count++;
		tortoise = tortoise->next;
	}

	return (count);
}
