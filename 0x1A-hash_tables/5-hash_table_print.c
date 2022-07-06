#include "hash_tables.h"

/**
 * hash_table_print - print all keys in hashtable
 * @ht : hash_table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	int flag = 0;
	unsigned long int i = 0;
	hash_node_t *cr;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		cr = ht->array[i];
		while (cr)
		{
			if (flag == 0)
			{
				printf("\'%s\': \'%s\'", cr->key, cr->value);
				flag = 1;
			}
			else
				printf(", \'%s\': \'%s\'", cr->key, cr->value);
			cr = cr->next;
		}
	}
	printf("}\n");
}
