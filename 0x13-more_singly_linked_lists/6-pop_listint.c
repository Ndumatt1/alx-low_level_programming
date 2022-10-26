#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t linked list
 *
 * @head: head pointer to linked list
 *
 * Return: the head nodes data
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
