#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 *
 * @h: head pointer
 *
 * Return: the number of elements in listint_t list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = NULL;
	size_t count = 0;

	if (h != NULL)
	ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
