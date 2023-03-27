#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: its a variables
 * @b: its a variaables
 */

void swap_int(int *a, int *b)
{
int t;

t = *a;
*a = *b;
*b = t;
}
