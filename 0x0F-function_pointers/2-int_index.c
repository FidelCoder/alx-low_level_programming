#include "function_pointers.h"

/**
 * int_index -  returns the index of the first element that meets condition
 * @array: the array of int
 * @size: size of array
 * @cmp: function pointer
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, c = 0;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size ; i++)
		{
			c = cmp(array[i]);
			if (c != 0)
				return (i);
		}
	}
	return (-1);
}
