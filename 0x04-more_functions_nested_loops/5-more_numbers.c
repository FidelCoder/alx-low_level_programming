#include "main.h"

/**
 * more_numbers -  print numbers 0 to 14 x 10
 *
 * Return: On success int
 * On error, 0 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
	int i = 0;

	int j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
