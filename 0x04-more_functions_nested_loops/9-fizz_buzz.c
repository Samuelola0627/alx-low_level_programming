
#include <stdio.h>
#include "main.h"

/**
 * main - print 0 - 100, fizz for multi. of 3, buzz for multi. of  5
 * fizzbuzz for both
 * Return: 0
 */

int main(voi)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
