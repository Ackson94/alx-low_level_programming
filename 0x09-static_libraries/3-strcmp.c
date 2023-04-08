#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: 0 if the strings are equal, otherwise an integer
 *         less than 0 if s1 is less than s2, or greater than
 *         0 if s1 is greater than s2
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
