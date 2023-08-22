#include "main.h"

/**
 * rev_string - function
 *
 * @s: input
 */

void rev_string(char *s)
{
	int a, c;
	char t;

	for (a = 0; s[a] != '\0'; ++a)
		;
	
	for (c = 0; c < a / 2; c++)
	{
		t = s[c];
		s[c] = s[a - 1 - c];
		s[a - 1 - c] = t;
	}
}
