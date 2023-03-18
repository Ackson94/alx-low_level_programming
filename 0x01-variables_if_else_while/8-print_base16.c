#include <stdio.h>

/**
 * main - a program that prints all the numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
int a;

for (a = 48; a < 58; a++)
{
putchar(a);
}

for (a = 97; a < 103; a++)
{
putchar(a);
}

putchar('\n');
return (0);
}
