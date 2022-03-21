#include "main.h"

/**
 * print_rev - check length of string
 * @str : string
 * Return: 0
 * On error, 0 is returned, and errno is set appropriately.
 */
void print_rev(char *str)
{
	int counter = 0;

	int i = 0;

	while (str[counter])
	{
		counter = counter + 1;
	}
	for (i = (counter - 1); i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
