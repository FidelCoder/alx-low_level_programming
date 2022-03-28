#include "main.h"

/**
 * *_memcpy - sets memory with desired buffer
 * @dest : destination
 * @src : source
 * @n : size to be copied
 * Return: 0
 * On error, 0 is returned, and errno is set appropriately.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
