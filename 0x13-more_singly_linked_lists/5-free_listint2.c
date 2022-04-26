#include "list.h"

/**
 * free_listint2 - code that frees a linked list
 * @head: head of a list.
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *now;

	if (head != NULL)
	{
		now = *head;
		while ((temp = curr) != NULL)
		{
			now = now->next;
			free(temp);
		}
		*head = NULL;
	}
}
