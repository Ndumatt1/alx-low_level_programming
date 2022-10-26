#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given index in listint_list
 *
 * @head: head pointer
 *
 * @idx: index where newnode should be added
 *
 * @n: value to be added
 *
 * Return: the address of the new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *traverse;
	listint_t *newnode;
	unsigned int size = 0;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		return (NULL);
	}
	traverse = *head;
	while (traverse != NULL)
	{
		if (idx - 1)
		{
			traverse = traverse->next;
			newnode->next = traverse->next;
			traverse->next = newnode;
			size++;
		}
	}
	*head = newnode;
	return (newnode);
}
