#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: its a variable
 * Return: 0 or 1
 */
int _strlen(char *s)
{
int ackson = 0;

while (*s != '\0')
{
ackson++;
s++;
}

return (ackson);
}
