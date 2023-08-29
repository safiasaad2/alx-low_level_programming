#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function
 * @a: input
 * @size: input
*/

void print_diagsums(int *a, int size)
{
	int r, c = 0, c1 = 0;

	for (r = 0; r < size; r++)
	{
		c += a[r];
		c1 += a[size - r - 1];
		a += size;
	}
	printf("%d, ", c);
	printf("%d\n", c1);
}
