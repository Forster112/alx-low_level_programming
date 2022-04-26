#include "list.h"
#include <stdlib.h>

/**
 * free_listint - define function
 * @head: described argument
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
