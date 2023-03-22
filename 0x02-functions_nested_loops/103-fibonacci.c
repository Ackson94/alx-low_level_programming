#include <stdio.h>

/**
 * main - the first 10 terms
 * Return: Always 0 (success)
 */
int main(void)
{
int i = 0;
long j = 1, a = 2, sum = a;

while (a + j < 4000000)
{
a += j;
if (a % 2 == 0)
sum += a;
j = a - j;
++i;
}

printf("%ld\n", sum);
return (0);
}
