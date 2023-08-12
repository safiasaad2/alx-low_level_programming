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
	int d = 0, d1, d2;

	while (d <= 9)
	{
		d1 = 0;
		while (d1 <= 9)
		{
			d2 = 0;
			while (d2 <= 9)
			{
				if (d != d1 && d < d1 && d1 != d2 && d1 < d2)
				{
					putchar(d + 48);
					putchar(d1 + 48);
					putchar(d2 + 48);

					if (d + d1 + d2 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				d2++;
			}
			d1++;
		}
		d++;
	}
	putchar('\n');

	return (0);
}
