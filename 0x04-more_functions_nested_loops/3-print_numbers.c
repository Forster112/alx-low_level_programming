#include "main.h"

/**
 * print_numbers - prints number from 0 - 9
 * follwed by a newline
 */
void print_numbers(void)
{
	int i;

	for(i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	putchar('\n')
}
