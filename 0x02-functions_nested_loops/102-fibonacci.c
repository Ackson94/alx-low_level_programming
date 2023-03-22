#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
long long a = 1, b = 2, c;

printf("%lld, %lld, ", a, b);

for (i = 3; i <= 50; i++)
{
c = a + b;
printf("%lld", c);
if (i != 50)
printf(", ");
a = b;
b = c;
}

printf("\n");
return (0);
}

