#include "main.h"

/**
 * print_last_digit - function that print last digit of a number
 * @n: the last digit
 * Return: the last digit of a number
 */

int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
		d *= -1;

	_putchar(d + '0');
	return (0);
}
