#include "hash_tables.h"

/**
 * key_index - hashing function
 * @key : Key
 * @size: size
 * Return: hash
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2((unsigned char *)key) % size);
}
