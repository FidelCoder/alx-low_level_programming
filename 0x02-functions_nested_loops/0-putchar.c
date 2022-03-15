#include "main.h"
/* more headers should be here */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char putC[8] = "_putchar";

	int counter = 0;

	while (counter < 8)
	{
		_putchar(putC[counter]);
		counter++;
	}
	_putchar('\n');
	return (0);
}
