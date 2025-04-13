#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{
int i, rev, length;
i = 0;
while (s[i] != '\0')
{
i = i + 1;
}

length = i;

for (rev = length - 1; rev >= 0; rev--)
{
_putchar(s[rev]);
}
_putchar('\n');
}
