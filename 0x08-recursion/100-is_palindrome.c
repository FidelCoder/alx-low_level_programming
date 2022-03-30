#include "main.h"
int getlength(char *c, int i);
int _checkpalin(char *c, int i, int j, int halfl);

/**
 * is_palindrome - checks if is palindrome
 * @s : string
 * Return: 1 palindrome 0 nope
 * On error, 0 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int j = 0;

	j = getlength(s, i);
	return (_checkpalin(s, i, j - 1, j / 2));
}
/**
 * getlength - determines length
 * @c : string
 * @i : position of character
 * Return: void
 * On error, 0 is returned, and errno is set appropriately.
 */
int getlength(char *c, int i)
{
	if (c[i] == '\0')
	{
		return (i);
	}
	return (getlength(c, i + 1));

}
/**
 * _checkpalin -compares two characters
 * @c : string
 * @i : position of character
 * @j : position of inverse character
 * @halfl: half l
 * Return: void
 * On error, 0 is returned, and errno is set appropriately.
 */
int _checkpalin(char *c, int i, int j, int halfl)
{
	if (i >= halfl)
		return (1);
	if (c[i] == c[j])
		return (_checkpalin(c, i + 1, j - 1, halfl));
	else
		return (0);
}
