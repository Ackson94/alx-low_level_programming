#include "main.h"
#include <stdio.h>

/**
 * print_sign - to display of the sign of a number
 * @n: its a variable
 * Return: always 1 (success)
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
