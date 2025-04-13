#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int index_match;

	for (i = 0; haystack[i] != '\0'; i = i + 1)
	{
		for (index_match = 0; needle[index_match] != '\0'; index_match++)
		{
			if (haystack[i + index_match] != needle[index_match])
				break;
		}
		if (!needle[index_match])
			return (&haystack[i]);
	}
	return (NULL);
}
