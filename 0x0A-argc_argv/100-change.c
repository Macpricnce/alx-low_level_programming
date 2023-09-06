#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point of the program
 * @argc: Number of arg count
 * @argv: Arr of args
 *
 * Return: 0 if successful, 1 if an error occurred
 */


int main(int argc, char *argv[])
{
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);
	int total_coins = 0;
	int p;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (p = 0; p < num_coins; p++)
	{
		int num = cents / coins[p];

		cents %= coins[p];
		total_coins += num;
	}
	printf("%d\n", total_coins);
	return (0);
}
