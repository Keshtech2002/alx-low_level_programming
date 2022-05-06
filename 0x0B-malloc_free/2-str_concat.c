#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - concatenate two strings and return new string
* @s1: first string
* @s2: second string
* Return: pointer to char concatenated
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0, j = 0, m = 0, n = 0, len1 = 0, len2 = 0, size = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	while (s1[m] != '\0')
	{
		len1++;
		m++;
	}

	while (s2[n] != '\0')
	{
		len2++;
		n++;
	}

	size = len1 + len2;

	concat = (char *) malloc(sizeof(char) * size + 1);

	if (concat == NULL)
		return (NULL);

	while (i < size)
	{
		if (i < len1)
			*(concat + i) = *(s1 + i);
		else
		{
			*(concat + i) = *(s2 + j);
		}
		i++;
	}

	*(concat + size) = '\0';
	return (concat);
}
