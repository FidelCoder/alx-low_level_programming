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

	long double one = 1;

	long double two = 2;

	long double sum = one + two;

	printf("%.0Lf, ", one);
	printf("%.0Lf, ", two);

	for (i = 0; i < 96; i += 1)
	{
		sum = two + one;
		one = two;
		two = sum;
		if (i == 95)
		{
			printf("%.0Lf", sum);
			break;
		}
		printf("%.0Lf, ", sum);

	}
	printf("\n");
	return (0);
}
