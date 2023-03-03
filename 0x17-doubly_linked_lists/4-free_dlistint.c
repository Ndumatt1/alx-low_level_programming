#include "lists.h"
/**
* free_dlistint - frees a doubly linked list
* @head: head pointer
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *traverse;

	while (head != NULL)
	{
	traverse = head;
	head = head->next;
	free(traverse);
	}
	free(head);
}
