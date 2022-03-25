#include "main.h"

/**
 * rot13 - plus 13
 * @s1 : string
 * Return: string
 * On error, 0 is returned, and errno is set appropriately.
 */
char *rot13(char *s1)
{
	char a[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int z = 0;

	while (s1[i] != '\0')
	{
		for (z = 0 ; z < 52; z++)
		{
			if (s1[i] == a[z])
			{
				s1[i] = b[z];
				break;
			}
		}
		i++;
	}
	return (s1);
}
