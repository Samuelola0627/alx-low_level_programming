#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	long long int L;
	long int li;
	char so[] = "size of a";

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("%s long long int: %lu byte(s)\n", (unsigned long)sizeof(L), so);
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
