#include "function_pointers.h"

/**
 * print_name - print name by callback of another function
 * @name: name
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
