#include "main.h"
void _printchar(char *c, int i);

/**
 * _puts_recursion - prints using recursion
 * @s : string
 * Return: void
 * On error, 0 is returned, and errno is set appropriately.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	_printchar(s, i);
}
/**
 * _printchar - prints a character
 * @c : string
 * @i : position of character
 * Return: void
 * On error, 0 is returned, and errno is set appropriately.
 */
void _printchar(char *c, int i)
{
	if (c[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(c[i]);
	_printchar(c, i + 1);

}
