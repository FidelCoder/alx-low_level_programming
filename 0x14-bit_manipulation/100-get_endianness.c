#include "main.h"

/**
 * get_endianness - get_endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x = 1;
	char *y;

	y = (char *)&x;
	return (*y);
}
