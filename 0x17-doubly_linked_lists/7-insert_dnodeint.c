#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a newnode at a given position
 * @h: Head pointer to the doubly linked list
 * @idx: Is the index of the list where the new node should be added.
 * @n: Element to be added
 * Return: The address of the newnode or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *traversal;
	unsigned int count = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (*h)
	{
	traversal = *h;
		while (traversal->next != NULL)
		{
			if (count == idx)
			{
				traversal->next = newnode;
				newnode->prev = traversal;
				/*newnode->next = traversal->next;*/
			}
			count++;
			*h = (*h)->next;
		}
	}
	*h = newnode;
	return (newnode);
}
