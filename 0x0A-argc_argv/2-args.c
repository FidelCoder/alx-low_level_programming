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
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
