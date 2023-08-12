#include <stdio.h>

/**
 * main - function
 *
 * Description:printing combination
 *
 * Return: 0
*/

int main(void)
{
	int d = 0, d1;

	while (d <= 9)
	{
		d1 = 0;
		while (d1 <= 9)
		{
			if (d != d1 && d < d1)
			{
				putchar(d + 48);
				putchar(d1 + 48);

				if (d + d1 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			d1++;
		}
		d++;
	}
	putchar('\n');

	return (0);
}
