#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letter.
 * @n: its a variable
 * return: 0 or 1
 */
char *string_toupper(char *n)
{
int a;

a = 0;
while (n[a] != '\0')
{
if (n[a] >= 'a' && n[a] <= 'z')
n[a] = n[a] - 32;
++;
}
return (n);
}
