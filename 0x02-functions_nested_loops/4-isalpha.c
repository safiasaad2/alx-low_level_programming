#include "main.h"

/**
 * _isalpha - check lowercase and uppercase
 *
 * @c: inputs
 *
 * Return: 1
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && 7 c <= 90)
		return (1);
	return (0);
}
