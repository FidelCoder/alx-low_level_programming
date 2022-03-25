#include "main.h"
int get_length(char *str);
void reverse_arr(char *r);

/**
 * infinite_add-add loong numbers
 * @n1 : string
 * @n2 : string
 * @r  : result string
 * @size_r : size of r
 * Return: string
 * On error, 0 is returned, and errno is set appropriately.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int sum, z, x, b, j, i;
	char a, f;

	b = get_length(n1);
	x = get_length(n2);
	if (size_r <= x + 1 || size_r <= b + 1)
		return (0);
	j = x - 1;
	i = b - 1;
	for (z = 0; z < x || z < b; z++)
	{
		a = n2[j--];
		f = n1[i--];
		if (z >= x)
			a = '0';
		if (z >= b)
			f = '0';
		sum = a + f - 96 + carry;
		if (sum > 9)
		{
			sum = sum - 10;
			carry = 1;
		}
		else
			carry = 0;
		r[z] = sum + '0';
	}
	if (carry == 1)
	{
		r[z] = carry + '0';
		r[z + 1] = '\0';
	}
	reverse_arr(r);
	return (r);
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
/**
 * reverse_arr- check length of string
 * @r : string
 * Return: void
 * On error, 0 is returned, and errno is set appropriately.
 */
void reverse_arr(char *r)
{
	char temp;
	int gn, g, m;

	gn = get_length(r);
	g = gn - 1;
	for (m = 0; m <  gn  / 2; m++)
	{
		temp = r[m];
		r[m] = r[g];
		r[g] = temp;
		g--;
	}
}
