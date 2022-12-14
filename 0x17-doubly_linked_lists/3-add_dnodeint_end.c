#include "lists.h"
/**
* add_dnodeint_end - adds a new node at the end of a doubly linked list
* @head: head pointer
* @n: integer to be added
* Return: address of the new element or NULL if it fails
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;
	dlistint_t *traverse;
	if (head != NULL)
	{
	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
	{
	return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	traverse = *head;
	if (traverse == NULL)
	{
	*head = newnode;
	return (*head);
	}
	while (traverse->next != NULL)
	{
	traverse = traverse->next;
	}
	traverse->next = newnode;
	newnode->prev = traverse;
	}
	return (newnode);
}
