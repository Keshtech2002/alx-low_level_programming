#include <stdio.h>
#include "main.h"

/**
 * reverse_array - function to reverse an array
 * @a: array of elements
 * @n: number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int keep, i;

	for (i = 0; i < (n / 2); i++)
	{
		keep = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = keep;
	}
}
