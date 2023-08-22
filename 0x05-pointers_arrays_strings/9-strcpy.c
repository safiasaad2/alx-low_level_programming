#include "main.h"

/**
 * *_strcpy - function
 *
 * @dest: input
 * @src: input
 */

char *_strcpy(char *dest, char *src)
{
	int c = -1;

	do {
		c++;
		dest[c] = src[c];
	} while (src[c] != '\0');

	return (dest);
}
