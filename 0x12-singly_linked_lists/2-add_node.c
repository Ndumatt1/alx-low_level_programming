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
	char *ptr;

	temp = malloc(sizeof(list_t));
	if (!temp)
	{
		return (NULL);
	}
	ptr = strdup(str);

	temp->str = ptr;

	temp->next = *head;
	*head = temp;

	return (temp);
}
