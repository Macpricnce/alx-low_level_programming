#include "main.h"

/**
 * _islower - this function indicates 1 if the
 * input is a lowercase char.
 * @c: Lowercase alphabet
 * Return: 1 for lowercase char. 0 for the rest.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
