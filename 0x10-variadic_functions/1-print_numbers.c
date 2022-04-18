#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: separator
 * @n: number
 * @...: ellipsis
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0, z;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		z = va_arg(args, int);
		printf("%d", z);
		if (i == (n - 1))
			break;
		if (separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
