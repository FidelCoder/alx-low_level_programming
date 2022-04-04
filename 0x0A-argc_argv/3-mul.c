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
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
