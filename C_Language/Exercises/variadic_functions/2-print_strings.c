#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list argument_list;

	va_start(argument_list, n);

	for (i = 0; i < n; i = i + 1)
	{
		string = va_arg(argument_list, char *);
		if (!string)
			string = "(nil)";
		if (!separator)
			printf("%s", string);
		else if (separator && i == 0)
			printf("%s", string);
		else
			printf("%s%s", separator, string);
	}
	printf("\n");

	va_end(argument_list);

}
