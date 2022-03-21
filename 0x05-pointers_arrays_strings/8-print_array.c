#include "main.h"

/**
 * print_array - check length of string
 * @a : array
 * @n : length
 * Return: 0
 * On error, 0 is returned, and errno is set appropriately.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[0]);
			continue;
		}
		printf(", %d", a[i]);
	}
	printf("\n");
}
