#include "main.h"

/**
 * _puts - check length of string
 * @str : string
 * Return: 0
 * On error, 0 is returned, and errno is set appropriately.
 */
void _puts(char *str)
{
	int counter = 0;

	while (str[counter])
	{
		_putchar(str[counter]);
		counter = counter + 1;
	}
	_putchar('\n');
}
