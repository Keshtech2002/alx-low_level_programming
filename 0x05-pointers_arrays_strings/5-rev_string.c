#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverse a string
 *@s: string to reverse
 *Return: void
 */

void rev_string(char *s)
{
	int length, i;
	char store;

	for (length = 0; s[length] != '\0';)
		length++;

	for (i = 0; i < length / 2; i++)
	{
		store = s[length - i - 1];
		s[length - i - 1] = s[i];
		s[i] = store;
	}
}
