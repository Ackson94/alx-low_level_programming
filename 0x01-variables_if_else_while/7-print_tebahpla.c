#include <stdio.h>

/**
 * main - a program that prints the lowercase alphabet in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
char character;

for (character = 'z'; character >= 'a'; character--)
{
putchar(character);
}

putchar('\n');
return (0);
}
