#include "main.h"
int sqrtt(int x, int y);
/**
 * is_prime_number - find prime number
 * @n : number
 * Return: prime number
 * On error, 0 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (sqrtt(n, 2));
}
/**
 * sqrtt - find prime slow way
 * @x : number
 * @y : divisor check
 * Return: square root
 * On error, 0 is returned, and errno is set appropriately.
 */
int sqrtt(int x, int y)
{
	if (y >= x)
		return (1);
	if (x % y == 0)
		return (0);
	else
		return (sqrtt(x, y + 1));
}
