#include "main.h"

/**
 * main - a function that adds positive numbers
 * @argc: the arg count
 * @argv: the arr of arg
 * Return: 0 if no errors, otherwise
 */
int main(int argc, char *argv[])
{
	int k, s, sum = 0;

	if (argc < 1)
		printf("0\n");
	for (k = 1; k < argc; k++)
	{
		for (s = 0; argv[k][s]; s++)
		{
			if (!isdigit(argv[k][s]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[k]);
	}
	printf("%d\n", sum);
	return (0);
}
