#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 * Return: 0 when successful
 */
int main(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (abc[i] != 'e' && abc[i] != 'q')
			putchar(abc[i]);
	}
	putchar('\n');
	return (0);
}