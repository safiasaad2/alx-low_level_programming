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

	while (1)
	{
		s = f1 + f2;

		if (s > 4000000)
			break;

		if ((s % 2) == 0)
			total_s += s;

		f1 = f2;
		f2 = s;
	}
	printf("%.0f\n", total_s);

	return (0);
}
