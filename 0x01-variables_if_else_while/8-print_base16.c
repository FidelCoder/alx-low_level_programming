#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 * Return: 0 when successful
 */
int main(void)
{
	int i;

	char abc[] = "abcdef";

	for (i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');
	}
	for (i = 0; i < 6; i++)
	{
		putchar(abc[i]);
	}
	putchar('\n');
	return (0);
}
