#include <stdio.h>
#include "main.h"

/**
 * print_array -  function that prints n elements of an array of int
 * @a: array
 * @n: number of elements to print
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}

	putchar('\n');
}
