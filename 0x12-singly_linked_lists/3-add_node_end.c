#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at end of list_t list
 *
 * @head: pointer to the first node
 *
 * @str: data of list_t list
 *
 * Return: the address of the new element or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *traverse;

	traverse = *head;

	ptr = malloc(sizeof(list_t));

	if (!ptr)
	{
		return (NULL);
	}

	ptr->str = strdup(str);
	ptr->next = NULL;

	while (traverse->next != NULL)
	{
		traverse = traverse->next;
	}
	traverse->next = ptr;
	return (ptr);
}
