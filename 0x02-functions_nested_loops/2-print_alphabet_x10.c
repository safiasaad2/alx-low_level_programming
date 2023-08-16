#include "main.h"

/**
 * print_alphabet_x10 - function
 *
*/

void print_alphabet_x10(void)
{
	int L, l;

	for (L =0; L <= 9; L++)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
	}
}
