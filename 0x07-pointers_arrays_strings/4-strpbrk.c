#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strpbrk - this function searches a string for any of a set of bytes
 *@accept: string number 2
 *@s: string number 1
 *Return:  Returns the length of the initial segment...
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int i;
char *p;
p = s;
while (*p)
{
for (i = 0; accept[i]; i++)
{
if (*p == accept[i])
{
return (p);
}
}
p++;
}
return (NULL);
}
