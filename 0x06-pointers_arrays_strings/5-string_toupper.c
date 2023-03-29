#include "main.h"

/**
 * string_toupper - change all lowercase letters in a string to uppercase
 * @n: pointer to string
 *
 * Return: pointer to modified string
 */
char *string_toupper(char *n)
{
int a;

a = 0;
while (n[a] != '\0')
{
if (n[a] >= 'a' && n[a] <= 'z')
n[a] = n[a] - 32;
a++;
}
return (n);
}
