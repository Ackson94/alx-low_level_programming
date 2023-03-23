#include "main.h"

/**
 * print_triangle - print triangle
 * @size: its a variable
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int a, k;

for (a = 1; a <= size; a++)
{

for (k = a; k < size; k++)
{
_putchar(' ');
}

for (k = 1; k <= a; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

