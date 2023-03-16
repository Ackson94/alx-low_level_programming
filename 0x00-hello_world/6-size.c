#include <stdio.h>

/**
 * main - prints the size of various variable types
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("the size a char: %lu bytes(s) \n", (unsigned long)sizeof(a));
printf("the size a int: %lu bytes(s) \n", (unsigned long)sizeof(b));
printf("the size a long int: %lu bytes(s) \n", (unsigned long)sizeof(c));
printf("the size a long long int: %lu bytes(s) \n", (unsigned long)sizeof(d));
printf("the size a float: %lu bytes(s) \n", (unsigned long)sizeof(e));
return (0);
}

