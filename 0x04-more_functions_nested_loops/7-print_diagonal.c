#include "main.h"

/**
 * print_diagonal - draw diagonal line
 * @n: its a variable
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, k;

for (i = 0; i < n; i++)
{

for (k = 0; k < n; k++)
{
if (k == i)
_putchar('\\');
else
_putchar(' ');
}
_putchar('\n');
}
}
}
