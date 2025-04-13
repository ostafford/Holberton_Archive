#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i, negative, result, string_length, flag, offset;

	i = 0;
	negative = 0;
	result = 0;
	string_length = 0;
	flag = 0;
	offset = 0;

	while (s[string_length] != '\0')
		string_length = string_length + 1;

	while (i < string_length && flag == 0)
	{
		if (s[i] == '-')
			negative = negative + 1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			offset = s[i] - '0';
			if (negative % 2)
				offset = -offset;
			result = result * 10 + offset;
			flag = 1;
				if (s[i + 1] < '0' || s[i + 1] > '9')
				return (result);
			flag = 0;
		}
		i = i + 1;
	}

	if (flag == 0)
		return (0);

	return (result);
}
