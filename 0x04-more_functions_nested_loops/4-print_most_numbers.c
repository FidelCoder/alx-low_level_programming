#include "main.h"

/**
 * print_most_numbers -  print numbers 0 to 9
 *
 * Return: On success int
 * On error, 0 is returned, and errno is set appropriately.
 */
void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
