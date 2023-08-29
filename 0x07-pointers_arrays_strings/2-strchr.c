#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strchr - this function finds a char in a string
 *@c: char
 *@s: string char
 *Return: return pointer to first occurrence of c char
 */

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
{
return (s);
}
++s;
}
return ('\0');
}
