#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times character _ should be printed
 * Return: value of 0.
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int l, slash;

		for (l = 0; l < n; l++)
		{
			for (slash = 0; slash < n; slash++)
			{
				if (slash == l)
					_putchar('\\');
				else if (slash < l)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
