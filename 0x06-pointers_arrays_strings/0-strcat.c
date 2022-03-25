#include "main.h"

/**
 * *_strcat - concatenates string to destination
 * @dest : destination
 * @src  : source
 * Return: 0
 * On error, 0 is returned, and errno is set appropriately.
 */
char *_strcat(char *dest, char *src)
{
	int counter = 0;
	int i = 0;
	int counter2 = 0;

	while (dest[counter2])
		counter2 = counter2 + 1;
	while (src[counter])
	{
		counter = counter + 1;
	}
	for (i = 0; i < counter; i++)
	{
		dest[i + counter2] = src[i];
	}
	dest[i + counter2] = '\0';
	return (dest);
}
