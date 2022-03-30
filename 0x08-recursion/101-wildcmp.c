#include "main.h"
int getlength(char *c, int i);
int _checkpalin(char *c, char *m, int i, int j);
int s1check(int i, char *c, char m, int hold);
int nonstar(char *m, int j);

/**
 * wildcmp - checks if is palindrome
 * @s1 : string
 * @s2 : string 2
 * Return: 1 palindrome 0 nope
 * On error, 0 is returned, and errno is set appropriately.
 */
int wildcmp(char *s1, char *s2)
{
	int i = getlength(s1, 0);
	int j = getlength(s2, 0);

	return (_checkpalin(s1, s2, i - 1, j - 1));
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
 * @m : string 2
 * Return: void
 * On error, 0 is returned, and errno is set appropriately.
 */
int _checkpalin(char *c, char *m, int i, int j)
{
	int z, k;

	if (j < 0 || i < 0)
		return (1);
	if (m[j] == '*')
	{
		z = nonstar(m, j - 1);
		k = s1check(i, c, m[z], 0);
		return (_checkpalin(c, m, k, z));
	}
	if (c[i] == m[j])
	{
		if (j == 0 && i != 0 && m[j] != '*')
			return (0);
		return (_checkpalin(c, m, i - 1, j - 1));
	}
	else
		return (0);
}
/**
 * s1check -gets character matching after asterisk
 * @c : string
 * @i : position of character
 * @m : position of inverse character
 * @hold: hold position while looking for others
 * Return: integer
 * On error, 0 is returned, and errno is set appropriately.
 */
int s1check(int i, char *c, char m, int hold)
{
	if (i <= 0 && hold == 0)
		return (-1);
	if (i <= 0 && hold != 0)
		return (hold);
	if (c[i] == m)
	{
		hold = i;
		return (s1check(i - 1, c, m, hold));
	}
	else
		return (s1check(i - 1, c, m, hold));
}
/**
 * nonstar -gets character after one or many asterisks
 * @m : string
 * @j : position of character
 * Return: integer
 * On error, 0 is returned, and errno is set appropriately.
 */
int nonstar(char *m, int j)
{
	if (j <= 0)
		return (-1);
	if (m[j] == '*')
		return (nonstar(m, j - 1));
	else
		return (j);
}
