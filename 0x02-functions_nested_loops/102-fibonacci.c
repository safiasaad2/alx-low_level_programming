#include "main.h"

/**
 * main - function
 *
 * Description: printing fibonancci
 *
 * Return: 0
*/

int main(void)
{
	int c;
	unsigned long f1 = 0, f2 = 1, s;

	for (c = 0; c < 50; c++)
	{
		s = f1 + f2;
		printf("%lu", s);

		f1 = f2;
		f2 = s;

		if (c == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
