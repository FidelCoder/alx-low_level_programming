#include "main.h"

/**
 * _strpbrk - sets memory with desired buffe
 * @s : source
 * @accept : to be checked
 * Return: 0
 * On error, 0 is returned, and errno is set appropriately.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
