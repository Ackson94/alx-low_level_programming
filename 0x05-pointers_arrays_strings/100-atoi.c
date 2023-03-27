#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 * @s: its a variable
 * Return: 0 or 1
 */

int _atoi(char *s)
{
int a, b, c, len, e, digit;

a = 0;
b = 0;
c = 0;
len = 0;
e = 0;
digit = 0;

while (s[len] != '0')
len++;

while (a < len && e == 0)
{
if (s[a] == '-')
b++;

if (s[a] >= '0' && s[a] <= '9')
{
digit = s[a] - '0';
if (b % 2)
digit = -digit;
c = c * 10 + digit;
e = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
break;
e = 0;
}
a++;
}
if (e == 0)
return (0);

return (c);
}
