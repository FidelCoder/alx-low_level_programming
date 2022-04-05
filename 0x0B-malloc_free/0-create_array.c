#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a c
 * @size : size of array
 * @c : character
 * Return: array or null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *t;

	t = malloc(sizeof(char) * size);
	if (t == NULL || size <= 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}
	return (t);
}
