#include <stdio.h>

/**
 * main - function
 *
 * Description: sorting alphabet
 *
 * Return: 0
*/

int main(void)
{
	char l = 'a';
	char L = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}

	while (L <= 'Z')
	{
		putchar(L);
		L++;
	}
	putchar('\n');

	return (0);
}
