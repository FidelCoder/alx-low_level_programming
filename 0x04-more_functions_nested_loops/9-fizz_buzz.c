#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * Return: Always 0
 */
int main(void)
{
	int i = 2;

	printf("%d", 1);

	for (i = 2; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf(" FizzBuzz");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else
			printf(" %d", i);
	}
	putchar('\n');
	return (0);
}
