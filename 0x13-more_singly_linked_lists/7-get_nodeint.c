#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t linked list
 *
 * @head: head pointer to the first node
 *
 * @index: index of the node starting at zero
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count = 0;
	listint_t *traversal;

	if (head == NULL)
	{
		return (NULL);
	}
	traversal = head;

	while (traversal != NULL)
	{
		if (count == index)
			return (traversal);
		count++;
		traversal = traversal->next;
	}
	return (traversal);
}
