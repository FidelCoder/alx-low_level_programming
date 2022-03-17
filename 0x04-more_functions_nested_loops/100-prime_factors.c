#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - check the code
 * Return: Always 0
 */
int main(void)
{
	long maxF = -1;

	int i = 0;

	long int n = 612852475143;

	while (n % 2 == 0)
	{
		maxF = 2;
		n >>= 1;
	}
	while (n % 3 == 0)
	{
		maxF = 3;
		n = n / 3;
	}
	for (i = 5 ; i <= sqrt(n); i += 6)
	{
		while (n % i == 0)
		{
			maxF = i;
			n = n / i;
		}
		while (n % (i + 2) == 0)
		{
			maxF = i + 2;
			n = n / (i + 2);
		}
	}
if (n > 4)
	maxF = n;
printf("%ld\n", maxF);
	return (0);
}
