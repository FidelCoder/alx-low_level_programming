#include "main.h"
int sqrtt(int x, int y);
/**
 * _sqrt_recursion - find sqrt slow way
 * @n : number
 * Return: square root
 * On error, 0 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqrtt(n, 0));
}
/**
 * sqrtt - find sqrt slow way
 * @x : number
 * @y : sqrt check
 * Return: square root
 * On error, 0 is returned, and errno is set appropriately.
 */
int sqrtt(int x, int y)
{
	if (y >= x)
		return (-1);
	if (y * y == x)
		return (y);
	else
		return (sqrtt(x, y + 1));
}
