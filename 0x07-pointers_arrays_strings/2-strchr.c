#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: a string
 * @c: a character
 * Return: c
 */

char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
