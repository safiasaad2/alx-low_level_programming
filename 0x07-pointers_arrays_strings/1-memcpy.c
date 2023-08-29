#include "main.h"

/**
 * *_memcpy - function
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: the pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}
