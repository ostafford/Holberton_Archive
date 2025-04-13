#include "main.h"
#include <stdio.h>

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i,
	index_check,
	count_match,
	char_match;

	count_match = 0;

	for (i = 0; s[i] != '\0'; i = i + 1)
	{
		char_match = 0;
		for (index_check = 0; accept[index_check] != '\0'; index_check++)
		{
			if (s[i] == accept[index_check])
			{
				count_match = count_match + 1;
				char_match = 1;
			}
		}
		if (char_match == 0)
		{
			return (count_match);
		}
	}

	return (0);
}
