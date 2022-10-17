#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("size of a char: %lu.\n", (unsigned long)sizeof(char));
	printf("size of an int: %lu.\n", (unsigned long)sizeof(int));
	printf("size of a long int: %lu.\n", (unsigned long)sizeof(long int));
	printf("size of a long long int: %lu.\n", (unsigned long)sizeof(long long int));
	printf("size of a float: %lu.\n", (unsigned long)sizeof(float));
	return (0);
}
