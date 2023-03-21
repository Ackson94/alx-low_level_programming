#include <unistd.h>

/**
 * main - to display _putchar
 * Return: Always 0 (success)
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
