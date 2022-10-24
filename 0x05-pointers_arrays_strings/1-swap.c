#include "main.h"

/**
 * swap - interchange a and b
 * @*a: interger
 * @*b: interger
 */

void swap_int(int *a, int *b)
{
	int n;
	n = *a;
	*a = *b;
	*b = n;
}
