#include "lists.h"
/**
* add_dnodeint - adds a new node at the beginning of a doubly linked list
* @head: head pointer
* @n: node element
* Return: the new element or NULL if it fails
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;

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

	if (*head == NULL)
	{
	*head = newnode;
	return (*head);
	}
	newnode->next = *head;
	(*head)->prev = newnode;
	*head = newnode;
	}
	return (newnode);
}
