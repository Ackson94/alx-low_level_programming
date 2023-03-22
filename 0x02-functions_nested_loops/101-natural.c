#include <stdio.h>

/**
 * main - list all the natural numbers
 * Return: Always 0 (success)
 */

int main(void)
{
int i, z;

while (i < 1024)
{

if ((i % 3 == 0) || (i % 5 == 0))
{
z += i;
}
i++;
}

printf("%d\n", z);
return (0);
}
