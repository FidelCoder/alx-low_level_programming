#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to head
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	register size_t iter = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		iter++;
	}
	return (iter);
}
