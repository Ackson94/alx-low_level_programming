#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: its a variable
 * @src: its a variable
 * return: 0 or 1
 */
char *_strcat(char *dest, char *src)
{
int a;
int b;

a = 0;
while (dest[i] != '\0')
{
a++;
}
b = 0;
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
