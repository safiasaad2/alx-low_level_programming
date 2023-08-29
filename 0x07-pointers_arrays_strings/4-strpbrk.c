#include "main.h"

/**
 * *_strpbrk - function
 * @s: input
 * @accept: input
 * Return: the pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int r, R;
	char *a;

	r = 0;
	while (s[r] != '\0')
	{
		R = 0;
		while (accept[R] != '\0')
		{
			if (accept[R] == s[r])
			{
				a = &s[r];
				return (a);
			}
			R++;
		}
		r++;
	}

	return (0);
}
