#include "main.h"

/**
 * print_line -  print underscores
 * @n : defines number of __
 *
 * Return: On success int
 * On error, 0 is returned, and errno is set appropriately.
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
