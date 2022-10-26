#include "lists.h"

/**
 * sum_listint - returns the sum of the data of listint_t linked list
 *
 * @head: head pointer
 *
 * Return: sum of data of listint_t linked list or 0 if the list doesnt exist
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *traversal;

	if (head == NULL)
	{
		return (0);
	}
	traversal = head;

	while (traversal != NULL)
	{
		sum += traversal->n;
		traversal = traversal->next;
	}
	return (sum);
}
