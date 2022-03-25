#include "main.h"

/**
 * reverse_array - reverses array
 * @a : array
 * @n : size of array
 * Return: void
 * On error, 0 is returned, and errno is set appropriately.
 */
void reverse_array(int *a, int n)
{
	int i, temp, l;

	l = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[l];
		a[l] = temp;
		l--;
	}
}
