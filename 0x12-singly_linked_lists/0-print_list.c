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

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
			h = h->next;
			len++;
		}
	}
	return (len);
}
