#include <stdio.h>

/**
* main - a program that finds and prints the first 98 Fibonacci numbers
* Return: Always 0
*/
int main(void)
{
int count;
unsigned long y = 0; z = 1, sum;
unsigned long a, b, c, d;
unsigned long m, k;

for (count = 0; count < 92; count++)
{
sum = y + z;
printf("%lu, ", sum);
y = z;
z = sum;
}
a = y / 10000000000;
c = z / 10000000000;
b = y / 10000000000;
d = z / 10000000000;
for (count = 93; count < 99; count++)
{
m = a + b;
k = c + d;

if (b + d > 9999999999)
{
m += 1;
k %= 10000000000;
}
printf("%lu%lu", m, k);
if (count != 98)
printf(", ");
a = c;
b = d;
c = m;
d = k;
}

printf("\n");
return (0);
}
