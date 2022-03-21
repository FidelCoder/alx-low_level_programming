#include "main.h"

int get_length(char *str);
/**
 * rev_string - check length of string
 * @str : string
 * Return: 0
 * On error, 0 is returned, and errno is set appropriately.
 */
void rev_string(char *str)
{
	int length, c;

	char *begin, *end, temp;

	length = get_length(str);
	begin = str;
	end = str;
	for (c = 0; c < length - 1; c++)
		end++;
	for (c = 0; c < length / 2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}
/**
 * get_length - check length of string
 * @str : string
 * Return: length
 * On error, 0 is returned, and errno is set appropriately.
 */
int get_length(char *str)
{
	int counter = 0;

	while (str[counter])
	{
		counter = counter + 1;
	}
	return (counter);
}
