#include "main.h"

/**
 * leet - replace some strings
 * @s1 : string
 * Return: string
 * On error, 0 is returned, and errno is set appropriately.
 */
char *leet(char *s1)
{
	char a[5] = { 'A', 'E', 'O', 'T', 'L'};
	char b[5] = { '4', '3', '0', '7', '1'};
	int i = 0;
	int z = 0;

	while (s1[i] != '\0')
	{
		for (z = 0 ; z < 5; z++)
		{
			if (s1[i] == a[z] || (s1[i] - 32) == a[z])
				s1[i] = b[z];
		}
		i++;
	}
	return (s1);
}
