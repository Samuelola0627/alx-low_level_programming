
#include <stdio.h>
#include "main.h"

/**
 * main - print 0 - 100, fizz for multi. of 3, buzz for multi. of  5
 * fizzbuzz for both
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			putchar(Fizz);
		}
		else if (n % 5 == 0)
		{
			putchar(Buzz);
		}
		else if (n % 15 == 0)
		{
			putchar(FizzBuzz);
		}
		else
		{
			putchar(n);
		}
		if (n < 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
