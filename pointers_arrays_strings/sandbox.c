#include "main.h"
#include <stdio.h>

/* Function Prototype */
void print_diagsums(int *a, int size);

/* Data Segment */


/* BSS Segment */


/* Stack */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int diag_1, diag_2;

	diag_1 = 0;
	diag_2 = 0;

	for (i = 0; i < size; i = i + 1)
	{
		diag_1 += a[(size * i) + i];
		diag_2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", diag_1, diag_2);
}


/* Text Segment */
int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}
