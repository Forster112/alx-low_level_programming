#include <stdio.h>

/**
 * _putchar - program that prints _putchar
 * @c: The character to print
 *
 * Return: Always 0 (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
