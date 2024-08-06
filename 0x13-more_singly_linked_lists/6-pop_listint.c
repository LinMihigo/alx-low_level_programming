#include "lists.h"
/**
* pop_listint - adds a new node to the end of listint_t list
* @head: pointer to list head
* Return: data in the deleted node
*/
int pop_listint(listint_t **head)
{
	int n = (*head)->n;

    (*head) = (*head)->next;

    return (n);
}
