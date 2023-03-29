#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: its a variable
 * @n: its a variable
 * return: 0 or 1
 */
void reverse_array(int *a, int n)
{
int z;
int b;

for (z = 0; z < n--; z++)
{
b = a[z];
a[z] = a[n];
a[n] = b;
}
}
