#include "main.h"

/**
 * factorial - prints using recursion
 * @n : number
 * Return: factorial
 * On error, 0 is returned, and errno is set appropriately.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
