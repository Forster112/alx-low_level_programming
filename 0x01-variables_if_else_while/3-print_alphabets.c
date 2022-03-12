#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphas;

	for (alphas = 'a'; alphas <= 'z'; alphas++)
		putchar(alphas);

	for (alphas = 'A'; alphas <= 'Z'; alphas++)
		putchar(alphas);

	putchar('\n');
	return (0);
}
