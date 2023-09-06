#include "main.h"

/**
 * main - the entry point of the program
 * @argc: the arg count
 * @argv: the arg arr
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
