#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: stringcontaining the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, index_match;

	for (i = 0; *s != '\0'; i = i + 1)
	{
		for (index_match = 0; accept[index_match] != '\0'; index_match++)
		{
			if (*s == accept[index_match])
			{
				return (s);
			}
		}
		s = s + 1;
	}

	return (NULL);
}
