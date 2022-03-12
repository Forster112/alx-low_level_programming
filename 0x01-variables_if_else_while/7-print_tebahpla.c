#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char turn;

	for (turn = 'z'; turn >= 'a'; turn--)
		putchar(turn);

	putchar('\n');

	return (0);
}
