#include "main.h"

/**
 * print_square -  print squares
 * @size : defines number of  #
 * Return: On success int
 * On error, 0 is returned, and errno is set appropriately.
 */
void print_square(int size)
{
	int i = 0;

	int j = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
