#include "main.h"

/**
* main - the entry point of the program
* @argc: the arg count
* @argv: the arr of arg
* Return: always 0
*/
int main(int argc, char *argv[])
{
	int k = 0;

	while (k < argc)
	{
		printf("%s\n", argv[k]);
		k++;
	}
	return (0);
}
