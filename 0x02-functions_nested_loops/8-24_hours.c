#include "main.h"

/**
 * jack_bauer - 24:00
 * void : int to be checked
 *
 * Return: Returns void
 */
void jack_bauer(void)
{
	int i = 0;

	int j = 0;

	for (i = 0 ; i < 24; i++)
	{
		for (j = 0 ; j < 60; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
