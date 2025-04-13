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
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
