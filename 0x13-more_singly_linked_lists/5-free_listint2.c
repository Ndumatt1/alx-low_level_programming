#include "lists.h"

/**
 * free_listint2 - frees a listint_t linked list
 *
 * @head: head pointer pointing to the first node in the list
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *freeptr;

	ptr  = *head;

	while (ptr != NULL)
	{
		freeptr = ptr;
		ptr = ptr->next;
		free(freeptr);
	}
	if (!freeptr)
		free(freeptr);
	*head = NULL;
}
