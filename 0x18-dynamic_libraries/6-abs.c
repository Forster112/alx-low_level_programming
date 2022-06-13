#include "main.h"

/**
 * _abs - inputs the absolute value of a number
 *
 * @n: number to be returned as absolute value
 *
 * Return: absolute value of the number
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
