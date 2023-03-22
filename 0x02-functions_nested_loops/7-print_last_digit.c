#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @h: the number whose last digit needs to be printed
 *
 * Return: the value of the last digit of @h
 */

int print_last_digit(int h)
{
int s;
s = h % 10;
if (h < 0)
s = -s;
_putchar(s + '0');
return (s);
}
