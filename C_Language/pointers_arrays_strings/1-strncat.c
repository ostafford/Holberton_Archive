#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates n bytes from a string to another
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, l;

	i = 0;
	l = 0;

	while (dest[i] != '\0')
		i = i + 1;

	while (src[l] != '\0' && l < n)
	{
		dest[i] = src[l];
		i = i + 1;
		l = l + 1;
	}

	dest[i] = '\0';

	return (dest);
}
