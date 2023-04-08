#include "main.h"
#include <unistd.h>

/**
 * _putchar - display to character
 * @c: its a variable
 * Return: Always 0 (success)
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
