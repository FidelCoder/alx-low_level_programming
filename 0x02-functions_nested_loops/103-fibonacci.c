#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	long int one = 1;

	long int two = 2;

	long double sum = one + two;

	long double sum2 = 2;

	for (i = 0; i < 48; i += 1)
	{
		sum = two + one;
		if (sum > 4000000)
			break;
		one = two;
		two = sum;
		if (((int)sum % 2) == 0)
			sum2 = sum2 + sum;
	}
	printf("%.0Lf\n", sum2);
	return (0);
}
