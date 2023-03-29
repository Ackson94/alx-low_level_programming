#include "main.h"

/**
 * _strncat - concatenate two strings, up to n bytes from src
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of bytes to copy from src
 *
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;

a = 0;
while (dest[a] != '\0')
{
a++;
}
b = 0;
while (b < n && src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';

return (dest);
}
