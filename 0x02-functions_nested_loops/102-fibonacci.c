#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
long a = 1, b = 2, c;

printf("%ld, %ld, ", a, b);

for (i = 3; i <= 50; i++)
{
c = a + b;
printf("%ld", c);
if (i != 50)
printf(", ");
a = b;
b = c;
}

printf("\n");
return (0);
}

