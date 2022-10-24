#include "main.h"

/**
 * _strlen - length of a string
 * @s: a string
 * Return: _strlen
 */

int _strlen(char *s)
{
	int len;
	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (0);
}

