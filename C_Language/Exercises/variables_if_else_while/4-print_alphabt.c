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
char chlow = 'a';
for (chlow = 'a'; chlow <= 'z'; chlow++)
if (chlow != 'e' && chlow != 'q')
{
putchar(chlow);
}
putchar('\n');
return (0);
}

/*
- The char data type variable chlow is initialized to the value 'a', representing the starting point of the alphabet.
- The for loop iterates through each letter from 'a' to 'z', incrementing by 1 with chlow++ (going through the alphabet).
- The if statement uses the != operator to exclude the letters 'e' and 'q' from being processed in the loop.
- For each character that is not 'e' or 'q', putchar(chlow) prints that character to the console.
- Finally, putchar('\n') prints a newline to move the cursor to the next line after all the characters have been printed.
 */