#include "lists.h"
/**
 *get_dnodeint_at_index - returns nth node of a doubly linked list
 *@head: head pointer
 *@index: index of the node
 *Return: the nth node at index or NULL if the node doesnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *traverse;
	unsigned int count = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			if (count == index)
			{
				traverse = head;
				return (traverse);
			}
			count++;
			head = head->next;
		}
	}
	return (NULL);
}
