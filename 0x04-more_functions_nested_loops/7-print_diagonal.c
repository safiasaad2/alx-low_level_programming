#include "main.h"

/**
 * print_diagonal - function
 *
 * @n: input
 */

void print_diagonal(int n)
{
	int p = 0, pp;

	while (p < n && n > 0)
	{
		pp = 0;
		while (pp < n)
		{
			_putchar('#');
			pp++;
		}

		_putchar('\n');
		p++;
	}
	if (p == 0)
		_putchar('\n');
}
