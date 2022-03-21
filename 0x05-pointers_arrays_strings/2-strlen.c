#include "main.h"

/**
 * _strlen - check length of string
 * @s : string
 * Return: 0
 * On error, 0 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter])
	{
		if (s[counter] == '\0')
			break;
		counter = counter + 1;
	}
	return (counter);
}
