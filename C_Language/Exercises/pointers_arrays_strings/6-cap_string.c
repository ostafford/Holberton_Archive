#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes every word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */

char *cap_string(char *s)
{
	int i;
	int ary_lp;

	char spc_char[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i = i + 1)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		for (ary_lp = 0; ary_lp < 13; ary_lp = ary_lp + 1)
		{
			if (s[i] == spc_char[ary_lp])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
