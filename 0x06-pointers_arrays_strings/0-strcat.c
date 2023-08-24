#include "main.h"

/**
 * *_strncat - function
 *
 * @dest: input
 * @src: input
 *
 * Return: the pointer
 */
char *_strncat(char *dest, char *src)
{
	int s, s1;

	s = 0;
	while (dest[s])
		s++;

	for (s1 = 0; src[s1]; s1++)
		dest[s++] = src[s1];

	return (dest);
}
