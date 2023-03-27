#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: its variable
 */
void rev_string(char *s)
{
char array = s[0];
int count = 0;
int a;

while (s[count] != '\0')
count++;

for (a = 0; a < count; a++)
{
count--;
array = s[a];
s[a] = s[count];
s[count] = array;
}
}
