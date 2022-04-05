#include "main.h"

/**
 * _strdup - man strdup
 * @str : string
 * Return: duplicated string
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0;
	int j;

	if (str == NULL)
		return (NULL);
	while (str[i])
	i++;
	p = malloc(sizeof(char) * (i + 1));
	if (p == NULL || str == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		p[j] = str[j];
	}
	return (p);
}
