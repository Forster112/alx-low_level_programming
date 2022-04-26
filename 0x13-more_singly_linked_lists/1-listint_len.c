#include "list.h"

/**
 * listint_len - gets the number of nodes in a list
 * @h: list to print
 *
 * Return: number of list to print
 */
size_t listint_len(const listint_t *h)
{
	size_t e;

	for (e = 0; h; e++)
		h = h->next;
	return (e);
}
