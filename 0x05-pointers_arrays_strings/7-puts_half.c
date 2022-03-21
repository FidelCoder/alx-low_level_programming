#include "main.h"

/**
 * puts_half - check length of string
 * @str : string
 * Return: 0
 * On error, 0 is returned, and errno is set appropriately.
 */
void puts_half(char *str)
{
	int counter = 0;

	int i = 0;

	int n = 0;

	while (str[counter])
	{
		counter = counter + 1;
	}
	n = (counter / 2);
	if ((counter % 2) != 0)
		n = n + 1;
	for (i = n; i < counter; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
