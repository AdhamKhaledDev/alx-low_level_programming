#include "lists.h"
/*
 * insert_nodeint_at_beginning - places a new node at the start of a linked list
 * @head: pointer to the initial node in the list
 * @n: data to put in the new node
 *
 * Result: pointer to the new node, or NULL if the operation fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
