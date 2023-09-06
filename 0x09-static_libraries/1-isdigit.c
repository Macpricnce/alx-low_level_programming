#include "main.h"

/**
 * _isdigit - this funtion checks for digits (0 through 9)
 * @c: int
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
