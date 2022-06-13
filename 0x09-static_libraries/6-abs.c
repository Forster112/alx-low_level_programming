#include "main.h"

/**
 * _abs - inputs the absolute value of a number
 *
 * @i: number to be returned as absolute value
 *
 * Return: absolute value of the number
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
