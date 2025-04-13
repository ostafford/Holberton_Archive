#include "main.h"
#include <stdio.h>

/* Function Prototype */
int is_prime_number(int n);
int final_prime(int n, int i);

/* Data Segment */

/* BSS Segment */

/* Stack */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (final_prime(n, n - 1));
}

int final_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (final_prime(n, i - 1));
}

/* Text Segment */
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}

