#include "main.h"

/**
 * print_buffer- print buffer
 * @b  : string
 * @size: integer
 * Return: void
 * On error, 0 is returned, and errno is set appropriately.
 */
void print_buffer(char *b, int size)
{
	int mbuff, i, m;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (mbuff = 0; mbuff < size; mbuff += 10)
	{
		printf("%08x: ", mbuff);
		for (i = mbuff; i < mbuff + 10; i++)
		{
			if (i > size - 1)
				printf("  ");
			else
				printf("%02x", b[i]);
			if (i % 2 != 0)
				printf(" ");
		}
		for (m = mbuff; m < mbuff + 10; m++)
		{
			if (m > size - 1)
				break;
			if (b[m] >= 32 && b[m] <= 126)
				putchar(b[m]);
			else
			putchar('.');
	}
		printf("\n");
	}
}
