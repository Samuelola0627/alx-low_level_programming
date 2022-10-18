#include "main.h"

/**
 * _isalpha - check char if is lower/upper
 * @c: char to be checked
 * Retutn: 1 if char is lower/uppercase otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
