#include "main.h"

/**
 * *_strcpy - copies string to destination
 * @dest : destination
 * @src  : source
 * Return: 0
 * On error, 0 is returned, and errno is set appropriately.
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	int i = 0;

	while (src[counter])
	{
		counter = counter + 1;
	}
	for (i = 0; i < counter; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
