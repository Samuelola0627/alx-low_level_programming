#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: chessboard
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int a;
	int b;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(s[a][b]);
		}
		_putchar('\n');
	}
}
