#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: copy to
 * @src: copy from
 * @n: interger n
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
