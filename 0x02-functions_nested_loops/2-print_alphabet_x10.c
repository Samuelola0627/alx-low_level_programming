#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet x10
 */

void print_alphabet_x10(void)
{
	int n = 1;
	char az;

	while (n <= 10)
	{
		n++;
		for (az = 'a'; az <= 'z'; az++)
			_putchar(az);
	}
	_putchar('\n');
}
