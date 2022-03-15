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

	printf("%ld, ", one);
	printf("%ld, ", two);

	for (i = 0; i < 48; i += 1)
	{
		sum = two + one;
		one = two;
		two = sum;
		if (i == 47)
		{
			printf("%.0Lf", sum);
			break;
		}
		printf("%.0Lf, ", sum);

	}
	printf("\n");
	return (0);
}
