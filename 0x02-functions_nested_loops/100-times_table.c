#include "main.h"

/**
 * print_times_table - 9 times
 * @n : int to be checked
 *
 * Return: Returns void
 */
void print_times_table(int n)
{
	int i;

	int j;

	int c;

	if ( n > 15 || n < 0)
		return;

	for (i = 0 ; i <= n; i++)
	{
		for (j = 0 ; j <= n; j++)
		{
			c = j * i;
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
				continue;
			}
			if (c < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (c >= 10 && c <= 99)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else if(c > 99)
			{
				_putchar(' ');
				_putchar((c / 100) + '0');
				_putchar((c - ((c / 100) * 100)) / 10 + '0');
				_putchar((c - ((c / 100) * 100)) / 10 + '0');
			}
			if (j == n)
			{
				_putchar('\n');
				continue;
			}
			else
				_putchar(',');
		}
	}
}
