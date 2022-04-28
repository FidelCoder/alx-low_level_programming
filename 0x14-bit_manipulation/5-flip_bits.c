#include "main.h"

/**
 * flip_bits - check difference in bits
 * @n: number
 * @m: number2
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x[64], y[64];
	unsigned int count = 0, i, j = 0;

	for (i = 0; i < 64; i++)
	{
		x[i] = 0;
		y[i] = 0;
	}
	while (j < 64)
	{
		x[j] = n & 1;
		y[j] = m & 1;
		j++;
		m = m >> 1;
		n = n >> 1;
	}
	for (i = 0; i < 64; i++)
	{
		if (x[i] != y[i])
			count = count + 1;
	}
	return (count);
}
