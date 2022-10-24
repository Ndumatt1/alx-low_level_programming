#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t linked list
 *
 * @head: head pointer to the first node
 */

void free_list(list_t *head)
{
	free(head);
}
