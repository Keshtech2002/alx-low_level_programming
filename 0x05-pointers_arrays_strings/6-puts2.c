#include <stdio.h>
#include "main.h"

/**
 * puts2 - print stringsX2
 *@str: string to print
 *Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}

	_putchar('\n');
}
