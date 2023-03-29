#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* infinite_add - Adds two numbers
* @n1: First number
* @n2: Second number
* @r: Buffer that the function will use to store the result
* @size_r: Buffer size
*
* Return: Pointer to the result, or 0 if the result can not be stored in r
*/
void number(char *n)
{
int a = 0;
int b = 0;
char value;

while (*(n + a) != '\0')
{
a++;
}
a++;
for (b = 0; b < a; b++, a--)
{
value = *(n + b);
*(n + b) = *(n + a);
*(n + a) = value;
}
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int a = 0, i = 0, j = 0, dights = 0;
int b1 = 0, va2 = 0, tb = 0;

while (*(n1 + i) != '\0')
i++;
while (*(n2 + j) != '\0')
j++;
i--;
j--;

if (j >= size_r || i >= size_r)
return (0);

while (j >= 0 || i >= 0 || a == 1)
{
if (i < 0)
b1 = 0;
else
b1 = *(n1 + i) - '0';
if (j < 0)
va2 = 0;
else
va2 = *(n2 + j) - '0';
tb = b1 + va2 + a;
if (tb >= 10)
a = 1;
else
a = 0;
if (dights >= (size_r - 1))
return (0);
*(r + dights) = (tb % 10) + '0';
dights++;
j--;
i--;
}
if (dights == size_r)
return (0);
*(r + dights) = '\0';
number(r);
return (r);
}
