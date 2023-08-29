#include "main.h"

/**
 * print_chessboard- function
 *
 * @a: input
 * Return: nothing
*/

void print_chessboard(char (*a)[8])
{
	int r, R;

	for (r = 0; r < 8; r++)
	{
		for (R = 0; R < 8; R++)
		{
			_putchar(a[r][R]);
		}
		_putchar('\n');
	}
}
