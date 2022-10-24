#include "main.h"

/**
 * _puts - print string followed by new line
 * @str: a string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_purchar('\n');
}
