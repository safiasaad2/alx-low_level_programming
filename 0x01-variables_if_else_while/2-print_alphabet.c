#include <stdio.h>

/**
 * main - function
 *
 * Description: printing aplhabet letters
 *
 * Return: 0
*/

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');

	return (0);
}
