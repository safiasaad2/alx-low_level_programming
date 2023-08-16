#include "main.h"

/**
 * print_sign - printing + if n bigger than 0 and 0 if n is zero and - if in less than zero
 *
 * @n: inputs
 *
 * Return: 1 or 0 or -1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);

	}
}
