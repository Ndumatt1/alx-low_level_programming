#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of listint_t list
 *
 * @head: head pointer
 *
 * @n: data to be passed
 *
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = NULL;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
