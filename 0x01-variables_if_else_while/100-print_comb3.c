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
	int c = 0;

	int d = 0;

	while (c < 10)
	{
		while (d < 10)
		{
			d++;
			if (c >= (d - 1))
				continue;
			putchar(c + '0');
			putchar(d - 1 + '0');
			if (c == 8 && (d - 1) == 9)
				break;
			putchar(',');
			putchar(' ');
		}
		c++;
		d = 0;
	}
	putchar('\n');
	return (0);
}
