#include "main.h"

/**
 * print_binary - print binary
 * @n: unsigned integer
 * Return : void
 */
void print_binary(unsigned long int n)
{
	if (n >> 1)
		print_binary(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
