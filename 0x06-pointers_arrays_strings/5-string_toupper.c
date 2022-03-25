#include "main.h"

/**
 * string_toupper - UPPERCASE
 * @s1 : string
 * Return: string
 * On error, 0 is returned, and errno is set appropriately.
 */
char *string_toupper(char *s1)
{
	int counter = 0;

	while (s1[counter] != '\0')
	{
		if (s1[counter] <= 122 && s1[counter] >= 97)
			s1[counter] = s1[counter] - 32;
		counter++;
	}
	return (s1);
}
