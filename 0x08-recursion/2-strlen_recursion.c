#include "main.h"
int _printchar(char *c, int i);

/**
 * _strlen_recursion - prints using recursion
 * @s : string
 * Return: void
 * On error, 0 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	return (_printchar(s, i));
}
/**
 * _printchar - prints a character
 * @c : string
 * @i : position of character
 * Return: void
 * On error, 0 is returned, and errno is set appropriately.
 */
int _printchar(char *c, int i)
{
	if (c[i] == '\0')
	{
		return (i);
	}
	return (_printchar(c, i + 1));

}
