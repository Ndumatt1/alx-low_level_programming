#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of listint_t list
 *
 * @head: head pointer
 *
 * @n: integer data type
 *
 * Return: The address of new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *ptr;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = newnode;
	}
	return (newnode);
}
