#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9.
 *
 * Return: value of 0.
 */

void print_most_numbers(void)
{
char i;
for (i = 0; i < 10; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
