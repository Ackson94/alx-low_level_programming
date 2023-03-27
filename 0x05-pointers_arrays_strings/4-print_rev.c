#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: its variable
 */
void print_rev(char *s)
{
int ackson = 0;
int a;

while (*s != '\0')
{
ackson++;
s++;
}
s--;

for (a = ackson; a > 0; a--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
