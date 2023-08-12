#include <stdio.h>

/**
 * main - function
 *
 * Description: printing numbers from 0-9
 *
 * Return: 0
*/

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		putchar(d + '0');
		d++;
	}
	putchar('\n');

	return (0);
}
