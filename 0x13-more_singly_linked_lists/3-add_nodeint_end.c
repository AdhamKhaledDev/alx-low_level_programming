#include "lists.h"

/*
 * insert_nodeint_at_end - inserts a node at the end of a linked list
 * @head: pointer to the initial element in the list
 * @n: data to place in the new node
 *
 * Result: pointer to the new node, or NULL if the operation is unsuccessful
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}