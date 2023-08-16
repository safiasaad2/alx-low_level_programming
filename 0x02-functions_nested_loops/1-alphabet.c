#include "main.h"

/**
 * print_alphabet - utilizies on _putchar function to print alphabet
*/

void print_alphabet(void);
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	_putchar('\n');
}
