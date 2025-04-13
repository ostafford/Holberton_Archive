#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints one char out of 2 of a string
 * followed by new line
 * @str: string to print
 */

void puts2(char *str)
{
	int length, i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i = i + 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
