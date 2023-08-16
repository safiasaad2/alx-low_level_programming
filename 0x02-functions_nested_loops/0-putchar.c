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
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
