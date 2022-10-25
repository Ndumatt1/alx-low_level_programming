#include "lists.h"

/**
 * free_listint - frees a listint_t linked list
 *
 * @head: head pointer pointing to the first node
 */

void free_listint(listint_t *head)
{
	listint_t *traverse, *freeptr;

	traverse = head;

	while (traverse != NULL)
	{
		freeptr = traverse;
		traverse = traverse->next;
		free(freeptr);
	}
	if (!freeptr)
		free(freeptr);
}
