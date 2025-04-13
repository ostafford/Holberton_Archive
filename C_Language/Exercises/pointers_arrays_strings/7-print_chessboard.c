#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: two dimension array to print
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int index_match;

	for (i = 0; i < 8; i = i + 1)
	{
		for (index_match = 0; index_match < 8; index_match++)
		{
			_putchar(a[i][index_match]);
		}
		_putchar('\n');
	}
}
