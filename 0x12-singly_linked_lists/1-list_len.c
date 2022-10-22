#include "lists.h"

/**
 * list_len - lists the element in a linked list
 *
 * @h: pointer of list_t
 *
 * Return: the number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
