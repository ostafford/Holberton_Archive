#include "main.h"
#include <stdio.h>

/**
 * more_numbers - function that prints the numbers 10 time, from 0 to 14.
 *
 * Return: value of 0.
 */

void more_numbers(void)
{
char i;
char n;
for (i = 0; i < 10; i++)
{
for (n = 0; n < 15; n++)
{
if (n >= 10)
{
_putchar(n / 10 + '0');
}
_putchar(n % 10 + '0');
}
_putchar('\n');
}
}
