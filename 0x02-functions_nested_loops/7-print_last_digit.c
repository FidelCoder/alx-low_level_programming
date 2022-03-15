#include "main.h"

/**
 * print_last_digit - Absolute value of int
 * @n : int to be checked
 *
 * Return: Returns n always
 */
int print_last_digit(int n)
{
	if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
		return (n);
	}
	else if (n < 0 && n >= -9)
	{
		_putchar((n * -1) + '0');
		return (n * -1);
	}
	else if (n <= -10)
	{
		_putchar(((n % 10) * -1) + '0');
		return (((n % 10) * -1));
	}
	else if (n >= 10)
	{
		_putchar((n % 10) + '0');
		return ((n % 10));
	}
return (0);
}
