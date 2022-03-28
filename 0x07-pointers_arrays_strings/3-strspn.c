#include "main.h"

/**
 * _strspn - sets memory with desired buffe
 * @s : source
 * @accept : to be checked
 * Return: 0
 * On error, 0 is returned, and errno is set appropriately.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;
	unsigned int cond = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count = count + 1;
				cond = 1;
			}
		}
		if (cond == 0)
			break;
		cond = 0;
	}
	return (count);
}
