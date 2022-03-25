#include "main.h"

/**
 * *_strncat - concatenates string to destination
 * @dest : destination
 * @src  : source
 * @n    : at most n bytes
 * Return: 0
 * On error, 0 is returned, and errno is set appropriately.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int counter2 = 0;

	while (dest[counter2])
		counter2 = counter2 + 1;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i + counter2] = src[i];
	}
	dest[i + counter2] = '\0';
	return (dest);
}
