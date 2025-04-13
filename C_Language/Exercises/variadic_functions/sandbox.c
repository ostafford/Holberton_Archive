#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variadic_functions.h"


/* Function Prototype */
void print_all(const char * const format, ...);

/* Data Segment */


/* BSS Segment */


/* Stack */
void print_all(const char * const format, ...)
{
    int i = 0;
	char *string_argument;
    char *string_separator = "";

	va_list argument_list;

	va_start(argument_list, format);

	if (format)
    {
        while(format[i]) /* counter (loop) */
        {
            switch (format[i]) /* iterator. Going through the list */
			{
				case 'c':
					printf("%s%c", string_separator, va_arg(argument_list, int));
					break;
				case 'i':
					printf("%s%d", string_separator, va_arg(argument_list, int));
					break;
				case 'f':
					printf("%s%f", string_separator, va_arg(argument_list, double));
					break;
				case 's':
					string_argument = va_arg(argument_list, char *);
					if (!string_argument)
						string_argument = "(nil)";
					printf("%s%s", string_separator, string_argument);
					break;
				default:
					i = i + 1;
					continue;
			}

                   string_separator = ", ";
        i = i + 1;
        }

    
    }
va_end(argument_list);
                   printf("\n");
}


/* Text Segment */
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}


