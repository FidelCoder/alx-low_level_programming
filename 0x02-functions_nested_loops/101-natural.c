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

	int sum = 0;

	for (i = 0; i < 1024; i += 1)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
