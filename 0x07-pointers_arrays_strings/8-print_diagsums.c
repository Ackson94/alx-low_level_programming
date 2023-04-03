#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of the two
* diagonals of a square matrix of integers
* @a: input pointer.
* @size: size of the matrix
* Return: no return.
*/
void print_diagsums(int *a, int size)
{
int k, sum1 = 0, sum2 = 0;

for (k = 0; k < (size * size); k++)
{
if (k % (size + 1) == 0)
sum1 += *(a + i);
if (k % (size - 1) == 0 && k != 0 && k < size * size - 1)
sum2 += *(a + k);
}
printf("%d, %d\n", sum1, sum2);
}
