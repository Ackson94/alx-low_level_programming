#include "main.h"

/**
 * print_alphabet_x10 - to display an alphabet_x10 letters
 */

void print_alphabet_x10(void)
{
char i;
int a;

for (a = 1; a <= 10; a++)
{

for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);

}
_putchar('\n');
}
}

