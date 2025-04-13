#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char chlow = 'z';
for (chlow = 'z'; chlow >= 'a'; chlow--)
{
putchar(chlow);
}
putchar('\n');
return (0);
}

/* 
1. Initialization: The char variable chlow is initialized to 'z'.
2. Loop: The for loop starts with chlow at 'z' and decrements it (chlow--) on each iteration, moving backward through the alphabet.
3. Condition: The loop continues as long as chlow >= 'a'. This means it will stop when chlow goes below 'a'.
4. Printing: In each iteration of the loop, putchar(chlow) prints the current value of chlow, starting from 'z' and moving toward 'a'.
5. Newline: After all characters have been printed, putchar('\n') moves the cursor to a new line. 
*/