#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
* print_dlistint - prints a double linked list
* @h: head pointer to doubly linked list
* Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
