#include <stdio.h>

/**
 * main - prints alpha in lower case
 * Return: Always 0
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
         putchar(letter);
    }
    putchar('\n');  // Print a new line
    return 0;
}
