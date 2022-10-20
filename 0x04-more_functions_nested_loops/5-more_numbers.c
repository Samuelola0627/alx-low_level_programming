#include "main.h"

/**
 * more_numbers - print 1 to 14 ten times
 */

void more_numbers(void)
{
	int c;
	int i;
	i = 0;

	while (i < 10)
	{
		for (c = '0'; c <= 14; c++)
			_putchar(c);
		i++
			_putchar('\n');
	}
}
