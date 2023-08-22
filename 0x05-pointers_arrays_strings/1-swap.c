#include "main.h"

/**
 * swap_int - function
 *
 * @a: input
 * @b: input
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
