#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords for the program 101-crackme.
 * Return: 0 or 1
 */
int main(void)
{
int a[100];
int i, sum, n;

sum = 0;

srand(time(NULL);

for (i = 0; i < 100; i++)
{
a[i] = rand() % 78;
sum += (a[i] + '0';
putchar(a[i] + '0';
if ((2772 - sum) - '0' < 78)
{
n = 2772 - sum - '0';
sum += n;
putchar(n + '0');
break;
}
}
return (0);
}
