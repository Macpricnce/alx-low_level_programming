#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - this function prints the sum of two numbers
 *@size: matrix size
 *@a: input pointer
 *Return: zilch.
 */

void print_diagsums(int *a, int size)
{
int i;
int j;
int sum8 = 0;
int sum9 = 0;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
sum8 += a[i * size + j];
if (i + j == size - 1)
sum9 += a[i * size + j];
}
}
printf("%d, %d\n", sum8, sum9);
}
