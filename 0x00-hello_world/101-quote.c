#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char oM[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(&oM, 1, sizeof(oM), stderr);
	return (1);
}