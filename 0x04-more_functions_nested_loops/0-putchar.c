#include "main.h"

/**
 * main - function
 *
 * Description: printing _putchar using prototype
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchar";
	int l;

	for (l = 0; l < 8; l++)
		_putchar(str[l]);
	_putchar('\n');

	return (0);
}
