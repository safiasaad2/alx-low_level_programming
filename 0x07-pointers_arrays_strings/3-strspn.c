#include "main.h"

/**
 * _strspn - function
 * @s: input
 * @accept: input
 * Return: the pointer
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int r, R;

	for (r = 0; s[r] != '\0' ; r++)
	{
		for (R = 0; accept[R] != s[r] ; R++)
		{
			if (accept[R] == '\0')
				return (r);
		}
	}

	return (r);
}
