#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *print_chessboard - this function prints a chessboard
 * @a: input
 *Return: 0 always
 */

void print_chessboard(char (*a)[8])
{
int i;
int j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
putchar(a[i][j]);
putchar('\n');
}
}
