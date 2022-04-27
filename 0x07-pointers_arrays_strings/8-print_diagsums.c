#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - description
 * @a: 2d array of int types
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + a[i][j];
				sum2 = sum2 + a[j][i];
			}
		}
	}

	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
