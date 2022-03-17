#include <stdio.h>

/**
 * _isalpha - comfirms is alphabet
 * @c: alphabet to be checked
 *
 * Return: Always 0 (success)
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
