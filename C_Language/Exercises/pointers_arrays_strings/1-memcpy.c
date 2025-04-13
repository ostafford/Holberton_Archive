#include "main.h"

/**
 * *_memcpy - copies memory area
 * @buffer: destination memory area
 * @buffer2: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *buffer, char *buffer2, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		buffer[i] = buffer2[i];
	}

	return (buffer);
}
