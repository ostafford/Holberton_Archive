#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer.
 * @r:  is the int that will use for the argument of the function
 * Return: 0
 */

int _abs(int r)
{
if (r > 0 || r == 0)
{
return (r);
}
else
return (r * -1);
}
