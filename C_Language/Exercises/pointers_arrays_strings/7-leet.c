#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the converted string
 */

char *leet(char *s)
{
	int i, j;

	char *to_be_converted = "aAeEoOtTlL";
	char *leet = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == to_be_converted[j])
			{
				s[i] = leet[j];
			}
		}
	}

	return (s);
}
