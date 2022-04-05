#include "main.h"
void insertc(int j, int st, char *arri, char *str);
int county(char *str);

/**
 * strtow - returns a pointer to an array of strings (words)
 * @str: string
 * Return: returns a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i = 0, j, count = 0, st = -1, z;
	char **arr;

	if (str == NULL)
		return (NULL);
	count = county(str);
	arr = (char **) malloc(sizeof(char *) * count);
	if (arr == NULL || count == 0)
		return (NULL);
	for (j = 0 ; str[j] != '\0' && i < count; j++)
	{
		if (str[j] != ' ' && j == 0)
			st = j;
		if (str[j] != ' ' && str[j - 1] == ' ')
			st = j;
		if (str[j] != ' ' && (str[j + 1] == ' ' || str[j + 1] == '\0'))
		{
			z = j - st + 2;
			arr[i] = (char *) malloc(sizeof(char) * z);
			if (arr[i] == NULL)
			{
				for (j = 0; j <= i; j++)
					free(arr[j]);
				return (NULL);
				free(arr);
			}
			insertc(j, st, arr[i], str);
			i++;
		}
		else
			continue;
	}
	arr[i] = (char *) malloc(1 * 8);
	if (arr[i] == NULL)
		return (NULL);
	arr[i] = NULL;
	return (arr);
}
/**
 * insertc - insert
 * @j: j
 * @st: start point;
 * @arri: string
 * @str: str
 * Return: Void
 */
void insertc(int j, int st, char *arri, char *str)
{
	int i = 0, z = 0;

	z = j - st + 1;
	for (i = 0; i < z; i++)
	{
		arri[i] = str[st];
		st++;
	}
	arri[i] = '\0';
}
/**
 * county - count words separated by ' '
 * @str: string
 * Return: int
 */
int county(char *str)
{
	int i = 0, count = 0;

	while (str[i])
	{
		if (str[i] != ' ' && i == 0)
		{
			count++;
			i++;
			continue;
		}
		if (str[i] != ' ' && str[i - 1] == ' ')
		{
			count++;
		}
		i++;
	}
	return (count);
}
