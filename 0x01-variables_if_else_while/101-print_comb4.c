#include <time.h>
#include <stdio.h>
/* more headers should be here */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int b = 0;

	int c = 0;

	int d = 0;

	while (b < 10)
	{
		while (c < 10)
		{

			while (d < 10)
			{
				d++;
				if (c >= (d - 1) || b >= c)
					continue;
				putchar(b + '0');
				putchar(c + '0');
				putchar(d - 1 + '0');
				if (b == 7 && c == 8 && (d - 1) == 9)
					break;
				putchar(',');
				putchar(' ');
			}
			c++;
			d = 0;
		}
		b++;
		c = 0;
	}
	putchar('\n');
	return (0);
}
