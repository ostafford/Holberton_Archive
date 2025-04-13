#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char tmp;
	int i, length, revlen;

	length = 0;
	revlen = 0;

	while (s[length] != '\0')
	{
		length = length + 1;
	}

	revlen = length - 1;

	for (i = 0; i < length / 2; i = i + 1)
	{
		tmp = s[i];
		s[i] = s[revlen];
		s[revlen] = tmp;
revlen = revlen - 1;
	}
}
