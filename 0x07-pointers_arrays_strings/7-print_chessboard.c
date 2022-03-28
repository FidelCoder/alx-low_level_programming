#include "main.h"

/**
 * print_chessboard -finds the first occurrence of the substring
 * @a : source
 * Return: void
 * On error, 0 is returned, and errno is set appropriately.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(*(a[i] + j));
		}
		_putchar('\n');
	}
}
