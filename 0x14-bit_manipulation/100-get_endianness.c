#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 if small endian, 0 if big endian
 */
int get_endianness(void)
{
	unsigned int i;
	char *m;

	i = 1;
	m = (char *) &i;

	return ((int)*m);
}
