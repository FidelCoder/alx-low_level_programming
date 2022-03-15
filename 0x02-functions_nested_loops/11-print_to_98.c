#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - check the code
 * @n : int
 * Return: Always void
 */
void print_to_98(int n)
{
	int i = 0;
	int condition = 99;
	int step = 1;

	if (n > 98)
	{
		condition = 97;
		step = -1;
	}
	for (i = n; i != condition ; i += step)
	{
		int length = snprintf(NULL, 0, "%d", i);

		int z = 0;

		char *str = malloc(length + 1);

		snprintf(str, length + 1, "%d", i);
		for (z = 0; z < length; z++)
		{
			_putchar(str[z]);
		}
		if (i == 98)
			break;
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
