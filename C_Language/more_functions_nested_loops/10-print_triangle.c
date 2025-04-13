#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle with new line
 * @size: size of triangle
 * Return: value of 0.
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int line;
		char hash;

		for (line = 1; line <= size; line++)
		{
			for (hash = line; hash < size; hash++)
			{
				_putchar(' ');
			}

			for (hash = 1; hash <= line; hash++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
