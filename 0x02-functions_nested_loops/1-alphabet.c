#include <stdio.h>

/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: no return because void
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);

	putchar('\n');
}
