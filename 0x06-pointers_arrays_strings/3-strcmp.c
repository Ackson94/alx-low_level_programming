#include "main.h"

/**
 * _strcmp -  a function that compares two strings
 * @s1: its a variable
 * @s2: its a variable
 *return: 0 or 1
 */
int _strcmp(char *s1, char *s2)
{
int a;

a = 0;
while (s1[a] != '\0')
{
if (s1[a] != s2[a])
{
return (s1[a] - s2[a]);
}
a++;
}
return (0);
}
