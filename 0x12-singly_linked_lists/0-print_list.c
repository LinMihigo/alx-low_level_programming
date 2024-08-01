#include "lists.h"
/**
* print_int - prints int recursively
* @num: unsigned int
* Return: void
*/
void print_int(unsigned int num)
{
	if (num == 0)
	{
		_putchar('0');
		return;
	}

	if (num / 10 != 0)
	{
		print_int(num / 10);
	}

	_putchar((num % 10) + '0');
}

/**
* print_list - prints all elements of a list_t list
* @h: pointer to the head of the linked list
* Return: num of nodes
*/
size_t print_list(const list_t *h)
{
	int i = 0;
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
			_putchar('\n');
		}
		else
		{
			_putchar('[');
			print_int(h->len);
			_putchar(']');
			_putchar(' ');
			while (h->str[i] != '\0')
			{
				_putchar(h->str[i]);
				i++;
			}
			_putchar('\n');
		}
		h = h->next;
		n++;
	}
	return (n);
}
