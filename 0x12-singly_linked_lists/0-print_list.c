#include  <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - finctions that print list
 * @h: linked list header
 *
 * Return: return x
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		x++;
	}
	return (x);

}
