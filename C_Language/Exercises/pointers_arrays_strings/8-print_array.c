#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array to be printed
 * @n: number of elements to print
 * Return: followed by new line
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i = i + 1)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
		printf("\n");
}
