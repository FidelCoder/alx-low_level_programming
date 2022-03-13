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
	int a = 0;

	int b = 0;

	int c = 0;

	int d = 0;

	while (a < 10)
	{
		while (b < 10)
		{
			while (c < 10)
			{
				while (d < 10)
				{
					d++;
					if (a > c || (a == c && b >= (d - 1)))
						continue;
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d - 1 + '0');
					if (a == 9 && b == 8 && c == 9 && (d - 1) == 9)
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
	a++;
	b = 0;
	}
	putchar('\n');
	return (0);
}
