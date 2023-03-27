#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: 0 or 1
 */
void puts2(char *str)
{
int count = 0;

while (count >= 0)
{
if (str[count] == '\0')
{
_putchar('\n');
break;
}
if (count % 2 == 0)
_putchar(str[count]);
count++;
}
}
