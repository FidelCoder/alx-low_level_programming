#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	unsigned long int x;
	ht = hash_table_create(1024);
	x = hash_table_set(ht, "betty", "cool");
	printf("The result : %ld\n",x);
	x = hash_table_set(ht,"v" ,"X");
	printf("The result : %ld\n",x);
	return (EXIT_SUCCESS);
}
