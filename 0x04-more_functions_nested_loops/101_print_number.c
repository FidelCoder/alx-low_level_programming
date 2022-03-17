#include "main.h"

/**
 * print_number -  prints numbers by division
 * @n : number to be printed
 * Return: On success int
 * On error, 0 is returned, and errno is set appropriately.
 */
void print_number(int n)
{
	unsigned int n1;

	int i = 0;

	int j = 1;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	n1 = n;
	while ((n1 / j) >= 10)
		j = j * 10;
	while (j >= 1)
	{
		i = n1 / j;
		_putchar(i + '0');
		n1 = n1 % j;
		j = j / 10;
	}
}
