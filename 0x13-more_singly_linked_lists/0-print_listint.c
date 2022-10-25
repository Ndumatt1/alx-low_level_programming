#include "lists.h"

/**
 * print_listint - prints all element of listint_t
 *
 * @h: head pointer
 *
 * Return: return the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

		while (ptr != NULL)
		{
			printf("%d\n", ptr->n);
			ptr = ptr->next;
			count++;
		}
	return (count);
}
