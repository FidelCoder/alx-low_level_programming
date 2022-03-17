#include "main.h"

/**
 * print_triangle -  print squares
 * @size : defines number of  # and ' '
 * Return: On success int
 * On error, 0 is returned, and errno is set appropriately.
 */
void print_triangle(int size)
{
	int i = 0;

	int j = 0;

	int z = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (z = (size - i); z > 1; z--)
			{
				_putchar(' ');
			}
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
