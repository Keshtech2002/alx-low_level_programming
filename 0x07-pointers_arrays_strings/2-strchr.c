#include <stdio.h>
#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @s: This is the C string to be scanned
 * @c: This is the character to be searched in s
 * Return: a pointer to the first occurrence of the character c
 * NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
	}

	return (&s[i]);
}
