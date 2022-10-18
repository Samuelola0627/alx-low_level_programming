#include "main.h"

/**
 * _islower - print 1 if c is a lowercase otherwise print 0
 * @c: is the char to be checked
 * Return: 1 if c is lower else return 0
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
