#include "main.h"
#include <stdio.h>

/**
 * swap_int - to swap the value of two variables
 * @a: first integer
 * @b: second integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
