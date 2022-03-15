#include "main.h"

/**
 * _abs - Absolute value of int
 * @n : int to be checked
 *
 * Return: Returns 0 always
 */
int _abs(int n)
{
	if (n >= 1)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n * (-1));
	}
}
