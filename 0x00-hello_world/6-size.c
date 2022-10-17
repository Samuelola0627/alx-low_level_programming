#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	long long int lli;
	long int li;
	unsigned long ul;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("size of a li: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("size of a lli: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
