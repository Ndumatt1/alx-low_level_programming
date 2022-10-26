#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 *
 * @head: head pointer
 *
 * @index: index to be deleted
 *
 * Return: 1 if it works and -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *traverse;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	traverse = *head;

	while (traverse->next != NULL)
	{
		if (index == 0)
		{
			*head = (*head)->next;
		traverse->next = NULL;
		free(traverse);
		}
		else
			for (i = 0; i < index - 1; i++)
			{
				temp = traverse->next;
				traverse = traverse->next->next;
				temp->next = NULL;
				free(temp);
			}
	}
	return (1);

}
