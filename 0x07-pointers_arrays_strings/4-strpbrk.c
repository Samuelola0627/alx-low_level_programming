#include "main.h"

/**
 * _strpbrk - searches a string for any set of byte
 * @s: string
 * @accept: accept
 * Return: int
 */

char *_strpbrk(char *s, char *accept)
{
	char c, *p;

	for (c = *s; c != 0; s++)
	{
		for (p = accept; *p != 0; p++)
		{
			if (c == *p)
			{
				return (s);
			}
		}
	}
return (NULL);
}
