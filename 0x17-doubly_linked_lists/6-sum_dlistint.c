#include "lists.h"
/**
* sum_dlistint - sum all the elements of doubly linked list
* @head: head pointer to doubly linked list
* Return: sum of the elements or 0 if the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	if (head != NULL)
	{
	while (head != NULL)
	{
	total += head->n;
	head = head->next;
	}
	}
	return (total);
}
