#include "lists.h"
/*
 * display_listint - displays all elements in a linked list
 * @head: listint_t type linked list to showcase
 *
 * Result: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
