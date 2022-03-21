#include "main.h"

/**
 * swap_int -  swap numbers a and b
 * @a : number a
 * @b : number b
 * Return: void
 * On error, 0 is returned, and errno is set appropriately.
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *b;
	*b = *a;
	*a = z;
}
