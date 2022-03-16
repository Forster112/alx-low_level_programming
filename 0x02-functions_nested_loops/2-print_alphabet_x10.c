#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char alpha;

	while (alpha++ <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			putchar(alpha);
		putchar('\n');
	}
}
