#include "main.h"

/**
 * clear_bit - set the  bit
 * @n : pointer to new
 * @index: index to change
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int sum = 0, mul = 1, i, r = 0;
	unsigned int j = 0;
	unsigned long int x[64];

	for (i = 0; i < 64; i++)
		x[i] = 0;
	r = *n;
	while (j < 64)
	{
		i = r & 1;
		if (index == j)
			i = 0;
		x[j] = i;
		j += 1;
		r = r >> 1;
	}
	for (i = 0; i < 64; i++)
	{
		sum += x[i] * mul;
		mul = mul * 2;
	}
	if (index >= 64)
		return (-1);
	*n = sum;
	return (1);
}
