#include "variadic_functions.h"

/**
 * sum_them_all - get sum
 * @n: number
 * @...: ellipsis
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0, hold;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		hold = va_arg(args, int);
		if (!hold)
			continue;
		sum += hold;
	}
	va_end(args);
	return (sum);
}
