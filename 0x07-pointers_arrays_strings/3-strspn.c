#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strspn - this function retrieves the length of prefix substring
 *@accept: bytes accepted
 *@s: a pointer s to the string
 *Return: return the quantity of bytes accepted
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
unsigned int j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (!accept[j])
break;
}
return (i);
}
