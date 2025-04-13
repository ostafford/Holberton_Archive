#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @l:  is the int that will use for the argument of the function
 * Return: 0
 */

int print_last_digit(int l)
{
int last_digit;

last_digit = l % 10;
if (last_digit < 0)
last_digit *= -1;

_putchar (last_digit + '0');
return (last_digit);
}
