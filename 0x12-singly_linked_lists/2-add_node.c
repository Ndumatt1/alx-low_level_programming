#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node to linked list
 *
 * @head: head of the linked list
 *
 * @str: string of the linked list
 *
 * Return: the addres of the new element or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (!temp)
	{
		return (NULL);
	}
	temp->str = strdup(str);

	temp->next = *head;
	*head = temp;

	return (temp);
}
