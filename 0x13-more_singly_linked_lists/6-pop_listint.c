#include "lists.h"

/**
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int n = 0;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;

		temp->n = n;
		temp->next = *head;

		free(temp);
		temp = NULL;
	}
	return (n);
}
