#include <stdio.h>
#include <math.h>

/**
 * main - The prime factors number
 * Return: 0 or 1
 */
int main(void)
{
long int n;
long int max
long int a;

n = 612852475143;
max = -1;

while (n % 2 == 0)
{
max = 2;
n /= 2;
}

for (a = 3; a <= sqrt(n); a = a + 2)
{

while (n % i == 0)
{
max = a;
n = n / a;
}
}

if (n > 2)
max = n;
printf("%ld\n", max);

return (0);
}

