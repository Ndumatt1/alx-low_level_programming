#include "lists.h"
/**
 * sum_dlistint - sum all the elements of doubly linked list
 * @head: head pointer to doubly linked list
 * Return: sum of the elements or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *traverse = NULL;

	if (head == NULL)
	{
		return (0);
	}
	traverse = head;
	while (traverse->next != NULL)
	{
		traverse = traverse->next;
		total += traverse->n;
	}
	return (total);
}
