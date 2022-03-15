#include "main.h"

/**
 * times_table - 9 times
 * void : int to be checked
 *
 * Return: Returns void
 */
void times_table(void)
{
	int i = 0;

	int j = 0;

	int count = 0;

	for (i = 0 ; i <= 9; i++)
	{
		for (j = 0 ; j <= 9; j++)
		{
			count = j * i;
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
				continue;
			}
			if (count < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(count + '0');
			}
			else if (count >= 10)
			{
				_putchar(' ');
				_putchar((count / 10) + '0');
				_putchar((count % 10) + '0');
			}
			if (j == 9)
			{
				_putchar('\n');
				continue;
			}
			else
				_putchar(',');
		}
	}
}
