#include <stdio.h>

/**
 * main - print alphabet a - z
 * Return:Always 0
 */
int main(void)
{
	char az;


	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
