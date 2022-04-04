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
	int den[5] = {25, 10, 5, 2, 1};
	int coinTotal = 0;
	int i, num, m, z;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		if (num < den[i])
			continue;
		z = num / den[i];
		m = num % den[i];
		coinTotal += z;
		num = m;
		if (num == 0)
			break;
	}
	printf("%d\n", coinTotal);
	return (0);
}
