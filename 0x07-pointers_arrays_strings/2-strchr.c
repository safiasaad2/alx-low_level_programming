#include "main.h"

/**
 *  *_strchr - function
 * @s: input
 * @c: input
 * Return: the pointer
 */

char *_strchr(char *s, char c)
{
	int r;

	for (r = 0; s[r] >= '\0' ; r++)
	{
		if (s[r] == c)
		{
			return (s + r);
		}
	}

	return ('\0');
}
