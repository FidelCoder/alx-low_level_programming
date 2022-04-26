#include "lists.h"
/**
 * print_list - prints all elements of a lists
 * @h : pointer to head
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned long int count = 0;

	while (h != NULL)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count = count + 1;
	}
	return (count);
}
