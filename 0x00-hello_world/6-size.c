#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	long long int lli;

	printf("size of a char: %lu.\n", (unsigned long)sizeof(char));
	printf("size of an int: %lu.\n", (unsigned long)sizeof(int));
	printf("size of a long int: %lu.\n", (unsigned long)sizeof(long int));
	printf("size of a lli: %lu.\n", (unsigned long)sizeof(lli));
	printf("size of a float: %lu.\n", (unsigned long)sizeof(float));
	return (0);
}
