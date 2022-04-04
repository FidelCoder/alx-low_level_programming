#include "main.h"

/**
 * main - main program
 * @argc : number of arguments
 * @argv : array of passed strings
 * Return: 0 always.
 * On error, 0 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
