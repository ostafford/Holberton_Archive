#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i,
	counter,
	result_int,
	string_length,
	num_hit,
	digit;

	i = 0;
	counter = 0;
	result_int = 0;
	string_length = 0;
	num_hit = 0;
	digit = 0;

	while (s[string_length] != '\0')
		string_length = string_length + 1;

	while (i < string_length && num_hit == 0)
	{
		if (s[i] == '-')
			++counter;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (counter % 2)
				digit = -digit;
			result_int = result_int * 10 + digit;
			num_hit = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			num_hit = 0;
		}
		i = i + 1;
	}

	if (num_hit == 0)
		return (0);

	return (result_int);
}

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int sum, num, i, j, k;

	sum = 0;

	for (i = 1; i < argc; i = i + 1)
	{
		for (j = 0; argv[i][j] != '\0'; j = j + 1)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k = k + 1)
	{
		num = _atoi(argv[k]);
		if (num >= 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
