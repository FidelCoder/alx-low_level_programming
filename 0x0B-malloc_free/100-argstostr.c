#include "main.h"

/**
 * argstostr - concatenates arguments of program
 * @ac : number of arguments
 * @av : arguments
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, z = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
			j++;
		z = j + z + 1;
	}
	p = malloc((sizeof(char) * z) + 1);
	if (p == NULL)
		return (NULL);
	z = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			p[z] = av[i][j];
			j++;
			z++;
		}
		p[z++] = '\n';
	}
	p[z] = '\0';
	return (p);
}
