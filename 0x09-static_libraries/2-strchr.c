#include <stdio.h>
#include "main.h"

/**
 * _strchr - this function locates a char in a string
 * @s: String
 * @c: Char
 * Return: NULL if char not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
