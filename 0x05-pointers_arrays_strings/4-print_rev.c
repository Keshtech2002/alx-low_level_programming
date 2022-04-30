#include <stdio.h>
#include "main.h"

/**
 * print_rev - print strings in reverse and new line
 *@s: string to print
 *Return: void
 */

void print_rev(char *s)
{
	int m;

	m = 0;
	while (s[m] != '\0')
		m++;
	
	for (; m >= 0; m--)
		_putchar(s[m]);
	_putchar('\n');
}
