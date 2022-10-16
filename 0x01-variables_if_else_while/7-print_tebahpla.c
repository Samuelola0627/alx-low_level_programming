#include <stdio.h>
/**
 * main - print a-z in reverse form
 * Return: Always 0
 */

int main(void)
{
	char z;

	for (z = 'z'; z >= 'a'; z--)
		putchar(z);
	putchar('\n');
	return (0);
}
