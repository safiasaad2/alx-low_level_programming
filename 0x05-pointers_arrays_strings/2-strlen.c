#include "main.h"

/**
 * _strlen - function
 *
 * @s: input
 *
 * Return: length
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		++c;
	return (c);
}
