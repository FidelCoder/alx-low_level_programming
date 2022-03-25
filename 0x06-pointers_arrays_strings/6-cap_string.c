#include "main.h"
int checkC(char s);

/**
 * cap_string - UPPERCASE
 * @s1 : string
 * Return: string
 * On error, 0 is returned, and errno is set appropriately.
 */
char *cap_string(char *s1)
{
	int i = 0;
	int z = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] <= 122 && s1[i] >= 97 && i == 0)
			s1[i] = s1[i] - 32;
		if (s1[i] <= 122 && s1[i] >= 97 && i != 0)
		{
			z = checkC(s1[i - 1]);
			if (z == 1)
				s1[i] = s1[i] - 32;
		}
		i++;
	}
	return (s1);
}
/**
 * checkC - UPPERCASE
 * @s : char
 * Return: 0 or 1
 */
int checkC(char s)
{
	char a[14] = " \t\n,.;!\"?(){}";
	int i = 0;
	int check = 0;

	for (i = 0; i < 13; i++)
	{
		if (s == a[i])
		{
			check = 1;
			break;
		}
	}
	return (check);
}
