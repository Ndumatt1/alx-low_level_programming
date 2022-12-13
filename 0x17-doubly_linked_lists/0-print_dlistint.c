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
	const dlistint_t *current;
	size_t count = 0;
	if (h != NULL)
	{
		current = h;
	}
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
