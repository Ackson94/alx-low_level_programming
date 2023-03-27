#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * @str: its a variable
 */
void puts2(char *str)
{
int value = 0;
int a = 0;
char *x = str;
int z;

while (*x != '0')
{
x++;
value++;
}

a = value - 1;

for (z = 0; z <= a; z++)
{
if (z % 2 == 0)
{
_putchar(str[z]);
}
}
_putchar('\n');
}
