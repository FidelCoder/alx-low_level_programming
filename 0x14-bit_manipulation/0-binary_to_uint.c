#include "main.h"

/**
 * binary_to_uint - binary to unsigned integer
 * @b : binary number
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int mul = 1, sum = 0, len = 0, i, z, j = 0;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;
	if (len == 0)
		return (0);
	for (i = len - 1; j < len; i--, j++)
	{
		z = b[i] - '0';
		if (z != 0 && z != 1)
			return (0);
		sum += (z * mul);
		mul = mul * 2;
	}
	return (sum);
}
