#include "list.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add new nodes to the end of the list
 * @head: current place in the list
 * @n: int to add to the list
 * Return: pointer to current position in list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *now;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	now = *head;
	while (now->next != NULL)
		now = now->next;
	now->next = new;
	return (*head);
}
