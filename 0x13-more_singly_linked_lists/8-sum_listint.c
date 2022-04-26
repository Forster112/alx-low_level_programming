#include "lists.h"

/**
 * sum_listint - program returns the sum of all the data (n) of
 * a linked list
 * @head: head of a list.
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
