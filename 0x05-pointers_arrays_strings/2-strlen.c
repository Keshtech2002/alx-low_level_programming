#include <stdio.h>
#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string to count
 *
 * Return: returns the length of a string
 */

int _strlen(char *s)
{
	int j, count = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		count++;
	}

	return (count);
}
