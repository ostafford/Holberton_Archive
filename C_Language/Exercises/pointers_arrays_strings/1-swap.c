#include "main.h"
#include <stdio.h>

/**
*swap_int - swaps the values of two integers.
*@a: needs to equal b
*@b: needs to equal a
*/

void swap_int(int *a, int *b)
{
int bckup;

bckup = *a;
*a = *b;
*b = bckup;
}
