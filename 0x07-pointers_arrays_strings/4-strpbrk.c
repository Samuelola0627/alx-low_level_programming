#include "main.h"

/**
 * _strpbrk - searches a string for any set of byte
 * @s: string
 * @accept: accept
 * Return: int
 */

char *_strpbrk(char *s, char *accept)
{
	char b, *p;

	for (b = *s; b != 0; s++; b = *s)
	{
		for (p = accept; *p != 0; p++)
		{
			if (b == *p)
				return (s);
		}
	}
return (0);
}
