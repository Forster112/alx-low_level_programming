#include "main.h"

/**
 * print_last_digit - prints the last digint of a number
 * that is num % 10
 * @num: number in question
 *
 * Return: last digit of a number
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
