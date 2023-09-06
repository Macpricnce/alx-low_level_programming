#include "main.h"

/**
 * create_array - allocates an array of chars,
 * and initializes all its elements to a specific char.
 * @size: the size of the array to create
 * @c: the char to initialize
 * Return: a pointer to the newly created array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *j;

	if (size == 0)
		return (NULL);
	j = malloc(size * sizeof(char));
	if (j == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < size; k++)
	{
		j[k] = c;
	}
	return (j);
}
