#include "main.h"
#include <stdio.h>

/**
 * reverse_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i,
	j,
	tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i = i + 1)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
