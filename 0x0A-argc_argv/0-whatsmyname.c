#include "main.h"

/**
 * main - main program
 * @argc : number of arguments
 * @argv : array of passed strings
 * Return: 0 always.
 * On error, 0 is returned, and errno is set appropriately.
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
