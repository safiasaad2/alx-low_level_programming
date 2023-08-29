#include "main.h"

/**
 * *_memset - function
 *
 * @s: input
 * @b: input
 * @n: input
 * Return: the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r;

	for (r = 0; n > 0; r++, n--)
	{
		s[r] = b;
	}

	return (s);
}
