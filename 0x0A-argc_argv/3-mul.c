#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point of the program
 * @argc: the arg count
 * @argv: the arr of arg
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int j, v, w;

	j = 1;
	v = 2;
	w = 3;

	if (argc != w)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[j]) * atoi(argv[v]));
	return (0);
}
