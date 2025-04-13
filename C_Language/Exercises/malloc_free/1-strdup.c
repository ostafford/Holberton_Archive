#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, string_length;

	i = 0;
	string_length = 0;

	if (str == NULL)
		return (NULL);

	while (str[string_length])
		string_length = string_length + 1;

	dup = malloc(sizeof(char) * (string_length + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i = i + 1;

	return (dup);
}
