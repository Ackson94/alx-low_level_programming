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
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1, len2, carry, i, j;
char *p, *q;

len1 = strlen(n1);
len2 = strlen(n2);

if (len1 > size_r || len2 > size_r)
return (0);

p = n1 + len1 - 1;
q = n2 + len2 - 1;

carry = 0;
for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
{
int digit1 = i >= 0 ? *(p--) - '0' : 0;
int digit2 = j >= 0 ? *(q--) - '0' : 0;
int sum = digit1 + digit2 + carry;

if (r - p - 1 > size_r || sum > 9)
return (0);

carry = sum / 10;
*(r++) = (sum % 10) + '0';
}

*(r--) = '\0';

while (r > n1 && *r == '0')
r--;

if (r - n1 + 1 > size_r)
return (0);

for (i = 0; i <= r - n1; i++)
*(n1 + i) = *(r - i);

return (n1);
}

