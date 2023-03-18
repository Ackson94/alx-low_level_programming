#include <stdio.h>

/**
 * main -prints all possible different combinations of two digits.
 * Return: Always 0 (success)
 */
int main(void)
{
int a, m;

for (a = 49; a <= 56; a++)
{
for (m = 49; m <= 57; m++)
{
if (m > a)
{
putchar(a);
putchar(m);

if (a != 56 || m != 57)
{
putchar(',');
putchar(' ');

}
}
}
}

putchar('\n');
return (0);
}
