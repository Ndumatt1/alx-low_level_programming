#include "lists.h"

/**
 * print_list - prints all elements of list_t
 *
 * @h: pointer of list_t
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int len = 0;
	const list_t *ptr = NULL;

		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		ptr = h;
		while (ptr != NULL)
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
			ptr = ptr->next;
			len++;
		}
	return (len);
}
