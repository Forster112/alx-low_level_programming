#include "main.h"

/**
 * set_bit - sets the value of bit to 1
 * at a given index
 * @n: value of bit
 * @index: the given index
 *
 * Return: returns 1 at an index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
