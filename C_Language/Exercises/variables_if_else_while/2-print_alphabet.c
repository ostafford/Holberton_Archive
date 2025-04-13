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
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}

/* 
1. Data Type: The char data type represents a single character. In this case, the variable ch is initialized with the value 'a'.
2. Looping: The for loop starts with ch set to 'a', and in each iteration, ch is incremented by 1 (using ch++). The loop continues until ch exceeds 'z'.
3. Increment: The ch++ part increases the character's ASCII value, so it moves from 'a' to 'b', then 'b' to 'c', and so on, until 'z'.
4. Printing: The putchar(ch) function prints the current character in each iteration of the loop. It prints each character one by one as the loop iterates.
5. New Line: After all characters from 'a' to 'z' are printed, the putchar('\n') adds a new line for better formatting.
 */
