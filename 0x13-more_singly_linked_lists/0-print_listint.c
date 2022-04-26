#include "list.h"

/**
 * print_listint - the program prints all the elements of a list.
 * @h: list head
 *
 * Return: nodes list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
