#include "main.h"

/**
 * binary_to_uint - converts binary to
 * unsigned int
 * @b: binary to convert
 *
 * Return: converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int i, btwo;

	if (!b)
		return (0);

	uint = 0;

	for (i = 0; b[i] != '\0'; i++)
		;

	for (i--, btwo = 1; i >= 0; i--, btwo *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] & 1)
		{
			uint += btwo;
		}
	}
	return (uint);
}
