#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: is a declaration variable
 * Return: 1 when its lower case
 * and also return 0 otherwise
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
