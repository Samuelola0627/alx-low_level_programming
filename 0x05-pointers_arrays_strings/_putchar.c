#include <unistd.h>

/**
 * _putchar - write a standard output
 * @c: a character
 * Return: On success 1
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
