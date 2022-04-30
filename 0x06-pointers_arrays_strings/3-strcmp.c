#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string in comparison
 * @s2: second string in comparison
 * Return: 0 if they are equal, 1 if s1>s2, -1 if s2>s1 in ascii
 */

int _strcmp(char *s1, char *s2)
{
	int i, flag = 0;

	for (i = 0; ; i++)
	{
		if (s1[i] == s2[i])
		{
			if (s1[i] == '\0')
				return (0);
		}
		else
			return (s1[i] - s2[i]);
	}
}
