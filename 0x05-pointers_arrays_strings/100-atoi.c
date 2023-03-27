#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 * @s: its a variable
 * Return: 0 or 1
 */

int _atoi(char *s)
{
int c = 0;
unsigned int a = 0;
int b = 1;
int d = 0;

while (s[c])
{
if (s[c] == 45)
{
b *= -1;
}
while (s[c] >= 48 && S[c] <= 57)
{
d = 1;
a = (a * 10) + (s[c] - '0');
c++;
}
if (d == 1)
{
break;
}
c++;
}
a *= b;
return (a);
}
