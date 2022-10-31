#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: a string
 * @c: a character
 * Return: c
 */

char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
		a++;
	for (b = 0; b < a; b++)
	{
		if (c == s[b])
			s += b;
		return (s);
	}
	return ('\0');
}
