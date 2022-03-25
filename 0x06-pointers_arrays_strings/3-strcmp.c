#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1 :first string
 * @s2 :second string
 * Return: difference
 * On error, 0 is returned, and errno is set appropriately.
 */
int _strcmp(char *s1, char *s2)
{
	int counter = 0;
	int i = 0;

	while (i == 0)
	{
		if (s1[counter] == '\0' && s2[counter] == '\0')
			break;
		i = s1[counter] - s2[counter];
		if (i < 0 || i > 0)
			break;
		counter++;
	}
	return (i);
}
