#include "main.h"

/**
 * _isalpha -to display for alphabetic character
 * @c: its a variable
 * Return: 0 when is sucessful
 * and return 1 when is failed to meet condittion
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
