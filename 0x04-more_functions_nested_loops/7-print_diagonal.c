#include "main.h"

/**
 * print_diagonal -  print diagonal at end i
 * @n : defines number of spaces before \
 * Return: On success int
 * On error, 0 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
	int i = 0;

	int j = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
