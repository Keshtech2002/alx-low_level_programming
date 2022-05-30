#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int x; 
	int i, j;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		x = n >> i;
		if (x & 1)
		{
			printf("1");
			break;
		}
	}

	for (j = i - 1; j >= 0; j--)
	{
		x = n >> j;
		if (x & 1)
			printf("1");
		else
			printf("0");
	}
}
