#include "main.h"

/**
 * _strstr -finds the first occurrence of the substring
 * @haystack : source
 * @needle : to be checked
 * Return: 0
 * On error, 0 is returned, and errno is set appropriately.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, k;
	unsigned int count = 0;
	unsigned int nLength = 0;
	int cond = 0;

	while (needle[nLength])
		nLength++;
	if (nLength < 1)
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (k = 0; k < nLength; k++)
		{
			if (haystack[i + k] == needle[k] && cond == 1)
				count = count + 1;
			else if (haystack[i + k] == needle[k] && cond == 0)
			{
				count = 1;
				cond = 1;
			}
			else
			{
				cond = 0;
				count = 0;
			}
			if (count == nLength)
				return (&haystack[i]);
		}
	}
	return (NULL);
}
