#include "main.h"

/**
 * print_alphabet - prints all the alphabets in lowercase
 * uses _putchar function
 *
 * Return: 0 always
 */
int print_alphabet(void)
{
	char alBt[26] = "abcdefghijklmnopqrstuvwxyz";

	int counter = 0;

	while (counter < 26)
	{
		_putchar(alBt[counter]);
		counter++;
	}
	_putchar('\n');
	return (0);
}
