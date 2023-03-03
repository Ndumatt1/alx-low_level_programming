#include "lists.h"

/**
* dlistint_len - returns the number of elements in a doubly linked list
* @h: head pointer
* Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
