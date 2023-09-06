#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to be copied.
 * Return: a pointer to the copied string, or NULL if it fails.
 */
char *_strdup(char *str)
{
	unsigned int q, j;
	char *s;

	if (str == NULL)
		return (NULL);
	for (q = 0; str[q]; q++)
		;
		q++;
	s = malloc(q * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < q; j++)
	{
	s[j] = str[j];
	}
	return (s);
}
