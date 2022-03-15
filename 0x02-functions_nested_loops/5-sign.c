#include "main.h"

/**
 * print_sign - checks sign of int
 * @n : int to be checked
 *
 * Return: Returns 1 and prints + if n is greater than zero
 * Return 0: Returns 0 and prints 0 if n is zero
 * Return -1: Returns -1 and prints - if n is less than zero
 * On error, 0 is returned, and errno is set appropriately.
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
