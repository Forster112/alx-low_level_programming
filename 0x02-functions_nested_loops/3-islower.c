#include <stdio.h>

/**
 * _islower - checks if a letter is lowercase
 *@c: character to be checked
 *
 * Return: returns 1 if true and 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
