#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square, followed by a new line
 * @size: size of square
 * Return: value of 0.
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		char line;
		char hash;

		for (line = 0; line < size; line++)
		{
			for (hash = 0; hash < size; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
