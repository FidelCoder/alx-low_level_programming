#include "main.h"

/**
 * puts2 - check length of string
 * @str : string
 * Return: 0
 * On error, 0 is returned, and errno is set appropriately.
 */
void puts2(char *str)
{
	int counter = 0;

	int i = 0;

	while (str[counter])
	{
		counter = counter + 1;
	}
	for (i = 0; i < counter; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
