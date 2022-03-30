#include "main.h"
void _printchar(char *c, int i);

/**
 * _print_rev_recursion - prints in reverse using recursion
 * @s : string
 * Return: void
 * On error, 0 is returned, and errno is set appropriately.
 */
void _print_rev_recursion(char *s)
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
		return;
	}
	_printchar(c, i + 1);
	_putchar(c[i]);

}
