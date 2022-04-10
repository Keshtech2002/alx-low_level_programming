#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int a, d;

	for (a = 0; a <= 9; a++)
	{
		for (d = 0; d <= 9; d++)
		{
			if (a == d)
			{
				continue;
			}
			else
			{
				putchar(a + '0');
				putchar(d + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
