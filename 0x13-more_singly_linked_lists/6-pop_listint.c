#include "lists.h"

/**
 * pop_listint - program deletes the head node of
 * a linked list
 * @head: head of a linked list
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int node;
	listint_t *n;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	node = curr->n;

	h = curr->next;

	free(curr);

	*head = n;

	return (node);
}
