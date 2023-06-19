#include "main.h"

/**
* _strstr - finds the first occurrence of the substring.
* needle in the string haystack.
* @haystack: entire string.
* @needle: substring.
* Return: pointer to the beginning of located substring or
* NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
char *ackson;
char *pneedle;

while (*haystack != '\0')
{
ackson = haystack;
pneedle = needle;

while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
{
haystack++;
pneedle++;
}
if (!*pneedle)
return (ackson);
haystack = ackson + 1;
}
return (0);
}
