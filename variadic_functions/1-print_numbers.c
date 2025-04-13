#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argument_list;

	va_start(argument_list, n);

	for (i = 0; i < n; i = i + 1)
	{
		if (!separator)
			printf("%d", va_arg(argument_list, int));
		else if (separator && i == 0)
			printf("%d", va_arg(argument_list, int));
		else
			printf("%s%d", separator, va_arg(argument_list, int));
	}

	va_end(argument_list);

	printf("\n");
}
