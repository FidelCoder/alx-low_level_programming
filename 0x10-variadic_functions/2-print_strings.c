#include "variadic_functions.h"

/**
 * print_strings -print strings
 * @separator: separator
 * @n: number
 * @...: ellipsis
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	char *z;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		z = va_arg(args, char *);
		if (z == NULL)
			printf("(nil)");
		else
			printf("%s", z);
		if (i == n - 1)
			break;
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
