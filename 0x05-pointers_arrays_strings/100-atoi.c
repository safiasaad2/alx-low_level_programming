#include "main.h"

/**
 * _atoi - function
 *
 * @s: input
 *
 * Description: function
 *
 * Return: nothing
 */
int _atoi(char *s)
{
	unsigned int n = 0;
	int S = 1;

	do {
		if (*s == '-')
			S *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * S);
}
