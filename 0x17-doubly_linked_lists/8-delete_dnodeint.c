#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at the index of a dlistint_t
 * @head: head of the linked list
 * @index: Index of the node that should be deleted
 * Return: 1 if it succeds and -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (!head || !(*head))
	{
		return (-1);
	}
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (current->next)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (!current->next)
		{
			return (-1);
		}
		current = current->next;
	}
	if (current->next)
	{
		current->next->prev = current->prev;
	}
	current->prev->next = current->next;
	free(current);
	return (1);
}
