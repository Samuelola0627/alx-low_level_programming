#include <stdio.h>
/**
 * main - print 0 - 9 with ',' and ' '
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 11; n < 21; n++)
	{
		putchar(n);
		if (n != 20)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

