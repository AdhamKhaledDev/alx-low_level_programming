#include "lists.h"
/*
 * count_listint - determines the quantity of elements in a linked list
 * @head: listint_t type linked list to navigate
 *
 * Result: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
