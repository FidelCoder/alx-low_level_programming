#include "function_pointers.h"

/**
 * array_iterator- performs an action to an array
 * @array: the array
 * @size: the array size
 * @action: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;
	for (i = 0; i < size ; i++)
	{
		action(array[i]);
	}
}
