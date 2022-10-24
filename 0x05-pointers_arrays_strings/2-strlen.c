#include "main.h"

/**
 * _strlen - length of a string
 * @s: a string
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

